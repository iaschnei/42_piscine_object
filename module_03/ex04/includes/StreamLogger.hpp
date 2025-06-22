#ifndef STREAM_LOGGER_HPP
# define STREAM_LOGGER_HPP

# include <iostream>
# include "ILogger.hpp"

class StreamLogger : public ILogger {

    public:
    StreamLogger(std::ostream &output) : os(output) {}
    void write(std::string message) {
        os << message << std::endl;
    }
    private:
    std::ostream& os;
};


#endif