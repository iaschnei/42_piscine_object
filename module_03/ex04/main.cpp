
#include "includes/ConstantHeader.hpp"
#include "includes/FileLogger.hpp"
#include "includes/DateHeader.hpp"
#include "includes/ILogger.hpp"
#include "includes/StreamLogger.hpp"
#include "includes/HeaderLogger.hpp"

#include <vector>


// We have 3 derived classes from ILogger :
//   FileLogger -> logs a string in a file
//   StreamLogger -> logs a string in a stream
//   HeaderLogger -> logs a string + a header by calling FileLogger or StreamLogger

// We have two types of headers derived from IHeaderProvider :
//   DateHeader -> returns the current date as a string
//   ConstantHeader -> returns a given string

// Dependency injection means the object using a dependency isn't creating it, it is given to it
// The most common way to do that is via the constructor as we will see with HeaderLogger

int main (void) {

    std::vector<ILogger*> loggers;

    FileLogger* fileLogger = new FileLogger("log.txt");
    StreamLogger* streamLogger = new StreamLogger(std::cout);

    ConstantHeader* constHeader = new ConstantHeader("[INFO] ");
    DateHeader* dateHeader = new DateHeader();

    // Dependency injection : HeaderLogger did not create its own dependencies (logger and header)
    ILogger* fileLoggerWithHeader = new HeaderLogger(fileLogger, constHeader);
    ILogger* streamLoggerWithDate = new HeaderLogger(streamLogger, dateHeader);

    loggers.push_back(fileLogger);
    loggers.push_back(streamLogger);
    loggers.push_back(fileLoggerWithHeader);
    loggers.push_back(streamLoggerWithDate);

    std::vector<std::string> messages;
    messages.push_back("Hello world");
    messages.push_back("Logging works");
    messages.push_back("Another message");

    for (std::vector<std::string>::iterator msg = messages.begin(); msg != messages.end(); ++msg) {
        for (std::vector<ILogger*>::iterator logger = loggers.begin(); logger != loggers.end(); ++logger) {
            (*logger)->write(*msg);
        }
    }

    // Clean up
    delete fileLogger;
    delete streamLogger;
    delete fileLoggerWithHeader;
    delete streamLoggerWithDate;
    delete constHeader;
    delete dateHeader;

    return 0;
}