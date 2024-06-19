#ifndef HAMMER_HPP
# define HAMMER_HPP

class Hammer : public Tool {

 public:

    // Constructor/Destructor
    Hammer() {
        this->type = "Hammer";
        std::cout << GREEN << "Hammer constructor called" << RESET << std::endl;
    }
    ~Hammer() {
        std::cout << RED << "Hammer destructor called" << RESET << std::endl;
    }

    void use() {
        if (this->get_holding_worker() == NULL) {
            std::cout << YELLOW << "The hammer can't use itself ! It needs a worker" << RESET << std::endl;
            return ;
        }
        if (this->number_of_uses <= 0) {
            std::cout << YELLOW << "The hammer is broken and can't be used anymore" << RESET << std::endl;
            return ;
        }

        this->number_of_uses--;
        std::cout << BLUE << "The hammer has been used once, it has " << this->number_of_uses << " uses left." << RESET << std::endl;

    }

};

#endif // HAMMER_HPP
