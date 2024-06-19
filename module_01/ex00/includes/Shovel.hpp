#ifndef SHOVEL_HPP
# define SHOVEL_HPP

# include "Tool.hpp"
# include "Colors.hpp"

class Shovel : public Tool {

 public:

    // Constructor/Destructor
    Shovel() {
        this->type = "Shovel";
        std::cout << GREEN << "Shovel constructor called" << RESET << std::endl;
    }
    ~Shovel() {
        std::cout << RED << "Shovel destructor called" << RESET << std::endl;
    }

    void use() {
        if (this->get_holding_worker() == NULL) {
            std::cout << YELLOW << "The shovel can't use itself ! It needs a worker" << RESET << std::endl;
            return ;
        }
        if (this->number_of_uses <= 0) {
            std::cout << YELLOW << "The shovel is broken and can't be used anymore" << RESET << std::endl;
            return ;
        }

        this->number_of_uses--;
        std::cout << BLUE << "The shovel has been used once, it has " << this->number_of_uses << " uses left." << RESET << std::endl;

    }

};

#endif