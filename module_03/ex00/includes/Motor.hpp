#ifndef MOTOR_HPP
# define MOTOR_HPP

# include <iostream>
# include "Colors.hpp"

class Motor {

 public:

    Motor() {
        std::cout << GREEN << "Created a motor" << RESET << std::endl;
    }

    ~Motor() {
        std::cout << RED << "Destroyed a motor" << RESET << std::endl;
    }

    void    accelerate(int speed) {
        std::cout << YELLOW << "Accelerating by " << speed << "km/h" << RESET << std::endl;
    }
};

#endif