#ifndef FILE_LOGGER_HPP
# define FILE_LOGGER_HPP

# include <fstream>
# include "ILogger.hpp"

class FileLogger : public ILogger {

    public:
    FileLogger(const std::string &filename) : file(filename.c_str()) {}
    void write(std::string message) {
        file << message << std::endl;
    }

    private:
    std::ofstream file;

};


#endif