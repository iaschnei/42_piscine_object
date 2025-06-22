#include "includes/EmployeeManager.hpp"
#include "includes/ISalaried.hpp"
#include "includes/IExtern.hpp"


int main (void) {

    EmployeeManager *manager = new EmployeeManager();
    
    ISalaried::ContractEmployee *contract_employee = new ISalaried::ContractEmployee(8, "John");

    ISalaried::ContractEmployee *contract_employee2 = new ISalaried::ContractEmployee(8, "Michel");

    manager->addEmployee(contract_employee);
    manager->addEmployee(contract_employee2);

    manager->removeEmployee(contract_employee2);

    ISalaried::Apprentice *apprentice = new ISalaried::Apprentice(6, "Clemence");

    IExtern::TempWorker *temp_worker = new IExtern::TempWorker(10, "Jeanne");

    manager->addEmployee(apprentice);
    manager->addEmployee(temp_worker);

    manager->executeWorkday();
    manager->executeWorkday();

    contract_employee->add_off_time(10);

    apprentice->add_school_hours(7);

    temp_worker->add_work_days(7);

    manager->calculatePayroll();

    delete (contract_employee2);
    delete (contract_employee);
    delete (apprentice);
    delete (temp_worker);
    delete (manager);
}