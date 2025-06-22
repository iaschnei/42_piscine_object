#ifndef EMPLOYEE_HPP
# define EMPLOYEE_HPP


#include <string>
#include <iostream>
#include "Colors.hpp"

class Employee {


    public:

    

    Employee(int hourlyValue, std::string name) {
        this->hourlyValue = hourlyValue;
        this->name = name;
        this->total_work_time = 0;
        std::cout << GREEN << "Employee created with name " << name << RESET << std::endl;
    }

    virtual ~Employee() {
        std::cout << RED << "Employee deleted" << RESET << std::endl;
    }

    std::string get_name(void) {
        return this->name;
    }

    int executeWorkday(void) {
        std::cout << BLUE << "Employee " << this->name << " is working for 7 hours..." << RESET << std::endl;
        this->total_work_time += 7;
        return (7 * this->hourlyValue);
    }

    int get_hourly_value() {
        return this->hourlyValue;
    }

    int get_total_work_time() {
        return this->total_work_time;
    }

    protected:

    int hourlyValue;
    std::string name;
    int total_work_time;
    int current_month_days;

};


#endif