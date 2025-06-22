#ifndef EMPLOYEE_MANAGER_HPP
# define EMPLOYEE_MANAGER_HPP

# include <iostream>
# include <vector>
# include <cstddef>
# include "Colors.hpp"
# include "Employee.hpp"
# include "ISalaried.hpp"
# include "IExtern.hpp"

class Apprentice;


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
        std::cout << YELLOW << "Added employee " << new_employee->get_name() << RESET << std::endl;
    }

    void removeEmployee(Employee *employee_to_remove) {

        for (long unsigned int i = 0; i < employees.size(); i ++) {
            if (employees[i]->get_name() == employee_to_remove->get_name()) {
                std::cout << YELLOW << "Removed employee " << employees[i]->get_name() << RESET << std::endl;
                employees.erase(employees.begin() + i);
            }
        }
    }

    void executeWorkday() {
        for (long unsigned int i = 0; i < employees.size(); i ++) {
            employees[i]->executeWorkday();
        }
    }

    void calculatePayroll() {
        for (long unsigned int i =0; i < employees.size(); i ++) {

            ISalaried::ContractEmployee * contract_emp_cast = dynamic_cast<ISalaried::ContractEmployee*>(employees[i]);
            ISalaried::Apprentice * apprentice_cast = dynamic_cast<ISalaried::Apprentice*>(employees[i]);
            IExtern::TempWorker * temp_worker_cast = dynamic_cast<IExtern::TempWorker*>(employees[i]);
            if (apprentice_cast != NULL) {
                std::cout << BLUE << "Apprentice " << apprentice_cast->get_name() << " has earned " << (apprentice_cast->get_total_work_time() * apprentice_cast->get_hourly_value()) - apprentice_cast->get_total_off_hours() << " in total\nAnd went to school during " << apprentice_cast->get_total_school_hours() << " hours" << RESET << std::endl;
            }
            else if (contract_emp_cast != NULL) {
                std::cout << BLUE << "Contract employee " << contract_emp_cast->get_name() << " has earned " << (contract_emp_cast->get_total_work_time() * contract_emp_cast->get_hourly_value()) - contract_emp_cast->get_total_off_hours() << " in total" << RESET << std::endl;
            }
            else if (temp_worker_cast != NULL) {
                std::cout << BLUE << "Temp worker " << temp_worker_cast->get_name() << " has earned " << (temp_worker_cast->get_total_work_time() * temp_worker_cast->get_hourly_value()) << " in total" << RESET << std::endl;
            }
        }
    }


    private:

    std::vector<Employee *> employees;

};


#endif