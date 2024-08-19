#ifndef PACKAGE_REDUCTION_DISCOUNT_HPP
# define PACKAGE_REDUCTION_DISCOUNT_HPP

# include "command.hpp"

class PackageReductionDiscount : public Command {

 public:

    PackageReductionDiscount(int id, std::string date, std::string client, std::vector<std::pair<std::string, int> > articles) {

        this->id = id;
        this->date = date;
        this->client = client;
        this->articles = articles;

        this->total_price = 0;
    }

    int get_discounted_price() {

        this->total_price = get_total_price();

        if (this->total_price > 150) {
            return (this->total_price - 10);
        }
        return (this->total_price);
    }
};

#endif