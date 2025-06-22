#ifndef ISALARIED_HPP
# define ISALARIED_HPP

#include "Employee.hpp"


class ISalaried : public Employee {

    public :

    class ContractEmployee : public Employee {

        public :
        ContractEmployee(int hourly_value, std::string name) : Employee(hourly_value, name) {
            std::cout << GREEN << "Contract employee created" << RESET << std::endl;
            this->total_off_hours = 0;
        }

        ~ContractEmployee() {
            std::cout << RED << "Contract employee deleted" << RESET << std::endl;
        }

        void add_off_time(int hours) {
            this->total_off_hours += hours;
        }

        int get_total_off_hours(void) {
            return this->total_off_hours;
        }

        private :
        int total_off_hours;
    };

    class Apprentice : public ContractEmployee {

        public :
        Apprentice(int hourly_value, std::string name) : ContractEmployee(hourly_value, name) {
            std::cout << GREEN << "Apprentice created" << RESET << std::endl;
            this->total_school_hours = 0;
        }

        ~Apprentice() {
            std::cout << RED << "Apprentice deleted" << RESET << std::endl;
        }

        void add_school_hours(int hours) {
            this->total_school_hours += hours;
        }

        int get_total_school_hours(void) {
            return this->total_school_hours;
        }

        private :
        int total_school_hours;

    };
};


#endif