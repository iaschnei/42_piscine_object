#ifndef EMPLOYEE_HPP
# define EMPLOYEE_HPP


#include <string>
#include <iostream>
#include "Colors.hpp"

class Employee {


    public:

    Employee(std::string name) {
        this->name = name;
        std::cout << GREEN << "Employee created with the name " << this->name << RESET << std::endl;
    }

    ~Employee() {
        std::cout << RED << "Employee deleted" << RESET << std::endl;
    }

    std::string get_name(void) {
        return this->name;
    }

    int executeWorkday(void) {
        std::cout << BLUE << "Employee " << this->name << " is working for 7 hours..." << RESET << std::endl;
        return (7 * this->hourlyValue);
    }

    private:

    std::string name;
    int hourlyValue;

};


#endif