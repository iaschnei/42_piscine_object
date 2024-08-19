#ifndef CAR_HPP
# define CAR_HPP

# include <iostream>
# include "Brakes.hpp"
# include "Motor.hpp"
# include "Gear_stick.hpp"
# include "Steering_wheel.hpp"
# include "Colors.hpp"

class Car { // Responsible for the engine

 public:

    Car() {
        std::cout << GREEN << "Created a car" << RESET << std::endl;
        this->brakes = new Brakes();
        this->motor = new Motor();
        this->gear_stick = new Gear_stick();
        this->steering_wheel = new Steering_wheel();
    }

    ~Car() {
        std::cout << RED << "Destroyed a car" << RESET << std::endl;
        delete (this->brakes);
        delete (this->motor);
        delete (this->gear_stick);
        delete (this->steering_wheel);
    }

    void start() {
        std::cout << YELLOW << "Starting the engine..." << RESET << std::endl;
    }
    void stop() {
        std::cout << YELLOW << "Stoping the engine..." << RESET << std::endl;
    }

    Brakes          *brakes;
    Motor           *motor;
    Gear_stick      *gear_stick;
    Steering_wheel  *steering_wheel;

};

#endif