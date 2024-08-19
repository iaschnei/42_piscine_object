#ifndef BRAKES_HPP
# define BRAKES_HPP

# include <iostream>
# include "Colors.hpp"

class Brakes {

 public:

    Brakes() {
        std::cout << GREEN << "Created brakes" << RESET << std::endl;
    }

    ~Brakes() {
        std::cout << RED << "Destroyed brakes" << RESET << std::endl;
    }

    void apply_force_on_brakes(int force) {
        std::cout << YELLOW << "Applied a force of " << force << " on brakes" << RESET << std::endl; 
    }

    void apply_emergency_brakes() {
        std::cout << YELLOW << "Applied emergency brakes" << RESET << std::endl;
    }
};


#endif