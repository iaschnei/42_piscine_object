#ifndef DATE_HEADER_HPP
# define DATE_HEADER_HPP

#include "IHeaderProvider.hpp"
#include <ctime>

class DateHeader : public IHeaderProvider {

    public:
  
    std::string getHeader() {
        std::time_t t = std::time(NULL);
        char buffer[100];
        std::strftime(buffer, sizeof(buffer), "[%Y-%m-%d %H:%M:%S] ", std::localtime(&t));
        return std::string(buffer);
    }

};

#endif