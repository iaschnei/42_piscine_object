#include "includes/Worker.hpp"
#include "includes/Position.hpp"
#include "includes/Statistic.hpp"
#include "includes/Tool.hpp"
#include "includes/Shovel.hpp"
#include "includes/Hammer.hpp"
#include "includes/Workshop.hpp"
#include "includes/Colors.hpp"

int main(void) {

    Worker  *worker1 = new Worker(10, 10, 10, 50, 3, "John");
    Shovel  *shovel = new Shovel();

    worker1->pick_up_tool(shovel);

    Workshop    *workshop = new Workshop();

    workshop->register_worker(worker1);
    workshop->execute_work_day();

    Worker  *worker2 = new Worker(20, 30, 40, 30, 99, "Sarah");

    worker2->pick_up_tool(shovel);

    workshop->register_worker(worker2);
    workshop->execute_work_day();


    delete(worker1);
    delete(shovel);
    delete(workshop);

    return (0);
}