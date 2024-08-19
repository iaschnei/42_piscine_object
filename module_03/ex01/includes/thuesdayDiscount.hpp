#ifndef THUESDAY_DISCOUNT_HPP
# define THUESDAY_DISCOUNT_HPP

# include "command.hpp"

class ThuesdayDiscount : public Command {

 public:

    ThuesdayDiscount(int id, std::string date, std::string client, std::vector<std::pair<std::string, int> > articles) {

        this->id = id;
        this->date = date;
        this->client = client;
        this->articles = articles;

        this->total_price = 0;
    }

    int get_discounted_price() {

        this->total_price = get_total_price();

        if (this->date == "Thuesday") {
            return (this->total_price - (0.10 * this->total_price));
        }
        return (this->total_price);
    }

};

#endif