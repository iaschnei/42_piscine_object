#ifndef EMPLOYEE_MANAGER_HPP
# define EMPLOYEE_MANAGER_HPP

# include <iostream>
# include <vector>
# include "Colors.hpp"
# include "Employee.hpp"

class EmployeeManager {

    public:

    EmployeeManager() {
        std::cout << GREEN << "Employee manager created" << RESET << std::endl;
        return;
    }
    
    ~EmployeeManager() {
        std::cout << RED << "Employee manager created" << RESET << std::endl;
        return;
    }

    void addEmployee(Employee *new_employee) {
        if (new_employee == NULL) {
            return ;
        }
        this->employees.push_back(new_employee);
    }

    void removeEmployee(Employee *employee_to_remove) {

        for (int i = 0; i < employees.size(); i ++) {
            if (employees[i]->get_name() == employee_to_remove->get_name()) {
                employees.erase(employees.begin() + i);
            }
        }
    }

    void executeWorkday() {
        //This method must execute a single day of work for each of the registered worker.
        //One day equal 7 hours of work.
    }

    void calculatePayroll() {
        //This method must output in the console the amount of money to give to each of
        //the subscribed workers, over the last complete month.
    }


    private:

    std::vector<Employee *> employees;

};


#endif