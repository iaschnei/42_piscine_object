#ifndef WORKER_HPP
# define WORKER_HPP

# include "Position.hpp"
# include "Statistic.hpp"
# include "Colors.hpp"
# include <iostream>

class Worker {

 public:

    Worker() {
        std::cout << GREEN << "Worker constructor called" << RESET << std::endl;
        position = new Position();
        statistic = new Statistic();
    };

    ~Worker() {
        std::cout << RED << "Worker destructor called" << RESET << std::endl;
        delete(position);
        delete(statistic);
    };

 private:

    Position    *position;
    Statistic   *statistic;

};

#endif // WORKER_HPP