#ifndef STEERING_WHEEL_HPP
# define STEERING_WHEEL_HPP

# include <iostream>
# include "Colors.hpp"

class Steering_wheel {

 public:

    Steering_wheel() {
        std::cout << GREEN << "Created a steering wheel" << RESET << std::endl;
    }

    ~Steering_wheel() {
        std::cout << RED << "Destroyed a steering wheel" << RESET << std::endl;
    }

    void turn_wheel(int angle) {
        std::cout << YELLOW << "Turned the wheel by a " << angle << " degree angle" << RESET << std::endl;
    }

    void straihgten_wheels() {
        std::cout << YELLOW << "Straigthened the wheels back" << RESET << std::endl;
    }

};

#endif