#include "includes/Worker.hpp"
#include "includes/Position.hpp"
#include "includes/Statistic.hpp"
#include "includes/Tool.hpp"
#include "includes/Shovel.hpp"
#include "includes/Hammer.hpp"
#include "includes/Workshop.hpp"
#include "includes/Colors.hpp"

int main(void) {

    std::cout << MAGENTA << "------- Test1 : making a worker work -------" << RESET << std::endl;

    Worker  *worker1 = new Worker(10, 10, 10, 50, 3, "John");
    Shovel  *shovel = new Shovel();

    worker1->pick_up_tool(shovel);

    Workshop    *workshop = new Workshop("Woodworking");

    workshop->register_worker(worker1);
    workshop->execute_work_day();

    std::cout << MAGENTA << "------- Test2 : adding another worker and switching tool -------" << RESET << std::endl;

    Worker  *worker2 = new Worker(20, 30, 40, 30, 99, "Sarah");

    worker2->pick_up_tool(shovel);

    workshop->register_worker(worker2);
    workshop->execute_work_day();

    std::cout << MAGENTA << "------- Test3 : adding another workshop -------" << RESET << std::endl;

    Workshop    *workshop2 = new Workshop("Stoneworking");

    workshop2->register_worker(worker1);

    worker1->work(workshop2);           
    worker2->work(workshop2);       //Shouldn't work since worker2 isn't registered to workshop2

    std::cout << MAGENTA << "------- Test4 : using a tool -------" << RESET << std::endl;

    Tool * tool;

    tool = worker1->get_tool(0);       // Worker1 gave the tool away so it will return null

    std::cout << tool << std::endl;

    tool = worker2->get_tool(0);

    tool->use();
    tool->use();
    tool->use();
    tool->use();
    tool->use();
    tool->use();
    tool->use();
    tool->use();
    tool->use();
    tool->use();
    tool->use();
    tool->use();

    worker1->pick_up_tool(shovel);

    tool = worker1->get_tool(0);

    tool->use();

    delete(worker1);
    delete(worker2);
    std::cout << "Workers deleted" << std::endl;
    delete(shovel);
    delete(workshop);
    delete(workshop2);

    return (0);
}