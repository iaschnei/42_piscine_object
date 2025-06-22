#ifndef CONSTANT_HEADER_HPP
# define CONSTANT_HEADER_HPP

#include "IHeaderProvider.hpp"

class ConstantHeader : public IHeaderProvider {

    public:
    ConstantHeader(std::string h) : header(h) {}
    
    std::string getHeader() {
        return header;
    }

    private:
    std::string header;
};

#endif