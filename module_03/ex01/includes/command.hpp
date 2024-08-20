#ifndef COMMAND_HPP
# define COMMAND_HPP

# include <vector>
# include <utility>
# include <string>

// This class is 'closed' -> it is usable as it is and should not be changed
// But it's also 'open' -> it can be expended using inheritance 

class Command {

 public:

    Command(int id, std::string date, std::string client, std::vector<std::pair<std::string, int> > articles) {

        this->id = id;
        this->date = date;
        this->client = client;
        this->articles = articles;

        this->total_price = 0;
    }

    Command() {}

    ~Command() {}

    int get_total_price() {

        // To focus on the principle and for simplicity, everything is worth 10$

        for (long unsigned int i = 0; i < this->articles.size(); i++) {
            total_price += this->articles[i].second * 10;
        }

        return (total_price);
    }

    int                                         id;
    std::string                                 date;
    std::string                                 client;
    std::vector<std::pair<std::string, int> >    articles;
    int                                         total_price;

};

#endif