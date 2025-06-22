#ifndef HEADER_PROVIDER_HPP
# define HEADER_PROVIDER_HPP

# include <string>

class IHeaderProvider {

    public:

    virtual std::string getHeader() = 0;
    virtual ~IHeaderProvider() {}

};

#endif