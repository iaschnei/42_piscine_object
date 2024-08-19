#ifndef GEAR_STICK_HPP
# define GEAR_STICK_HPP

# include <iostream>
# include "Colors.hpp"

class Gear_stick {

 public:

    Gear_stick() {
        std::cout << GREEN << "Created a gear stick" << RESET << std::endl;
    }

    ~Gear_stick() {
        std::cout << RED << "Destroyed a gear stick" << RESET << std::endl;
    }

    void shift_gears_up() {
        std::cout << YELLOW << "Shifted a gear up" << RESET << std::endl;
    }

    void shift_gears_down() {
        std::cout << YELLOW << "Shifted a gear down" << RESET << std::endl;
    }

    void reverse() {
        std::cout << YELLOW << "Switched to reverse gear" << RESET << std::endl;
    }
};

#endif