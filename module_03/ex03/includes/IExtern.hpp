#ifndef IEXTERN_HPP
# define IEXTERN_HPP

# include "Colors.hpp"
# include "Employee.hpp"

class IExtern {

    public: 

    class TempWorker : public Employee {

        public :

        TempWorker(int hourly_value, std::string name) : Employee(hourly_value, name) {
            std::cout << GREEN << "Temp worker created" << RESET << std::endl;
            this->total_work_time = 0;
        }

        ~TempWorker() {
            std::cout << RED << "Temp worker deleted" << RESET << std::endl;
        }

        void add_work_time(int hours) {
            this->total_work_time += hours;
        }

        void add_work_days(int days) {
            this->total_work_time += days * 7;
        }
    };

};


#endif