#ifndef HEADER_LOGGER_HPP
# define HEADER_LOGGER_HPP

#include "IHeaderProvider.hpp"
#include "ILogger.hpp"

class HeaderLogger : public ILogger {
    
    public:
    HeaderLogger(ILogger *logger, IHeaderProvider *header_provider)
        : base(logger), header(header_provider) {}

    
    void write(std::string message) {
        base->write(header->getHeader() + message);
    }

    private:
    ILogger         *base;
    IHeaderProvider *header;

};

#endif