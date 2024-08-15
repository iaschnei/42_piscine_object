#ifndef WORKER_HPP
# define WORKER_HPP

# include "Position.hpp"
# include "Statistic.hpp"
# include "Shovel.hpp"
# include "Hammer.hpp"
# include "Tool.hpp"
# include "Colors.hpp"
# include <iostream>
# include <vector>
# include <string>

class Workshop;

class Worker {

 public:

    Worker(int x_val = 0, int y_val = 0, int z_val = 0, int exp_val = 0, int level_val = 0, std::string name = "Worker") {
        std::cout << GREEN << "Worker constructor called" << RESET << std::endl;
        position = new Position(x_val, y_val, z_val);
        statistic = new Statistic(exp_val, level_val);
        this->name = name;
    };

    ~Worker() {
        std::cout << RED << "Worker destructor called" << RESET << std::endl;
        delete(position);
        delete(statistic);
    };

    Position    *position;                              // Composition relationship : Worker owns and is responsible for it. When Worker dies, so does it
    Statistic   *statistic;                             // Same thing

    Tool    *get_tool(long unsigned int index) {
        if (index >= this->tools.size()) {
            return (NULL);
        }
        if (this->tools[index] != NULL) {
            return (this->tools[index]);
        }
        return (NULL);
    }

    void    pick_up_tool(Tool *tool) {
        if (tool->get_holding_worker() != NULL) {
            tool->get_holding_worker()->release_tool(tool);
        }
        this->tools.push_back(tool);
        tool->set_holding_worker(this);
        std::cout << BLUE << this->name << " picked up a " << tool->get_type() << "!" << RESET << std::endl;
    }

    int release_tool(Tool *tool) {

        for (long unsigned int i = 0; i < this->tools.size(); i++) {
            if (this->tools[i] == tool) {
                this->tools.erase(this->tools.begin() + i);
                std::cout << BLUE << this->name << " released a " << tool->get_type() << "!" RESET << std::endl;
                return (1);
            }
        }
        std::cout << YELLOW << this->name << " does not have this tool" << RESET << std::endl;
        return (0);
    }

    void    add_workshop(Workshop *workshop) {

        if (workshop == NULL) {
            return ;
        }

        for (long unsigned int i = 0; i < this->workshops.size(); i++) {
            if (this->workshops[i] == workshop) {
                std::cout << YELLOW << this->name << ": already in workshop" << RESET << std::endl;
                return ;
            }
        }
        this->workshops.push_back(workshop);
        std::cout << BLUE << this->name << ": joined workshop" << RESET << std::endl;
    }

    void    remove_workshop(Workshop *workshop) {

        if (workshop == NULL) {
            return ;
        }

        for (long unsigned int i = 0; i < this->workshops.size(); i++) {
            if (this->workshops[i] == workshop) {
                this->workshops.erase(this->workshops.begin() + i);
                std::cout << BLUE << this->name << ": left workshop" << RESET << std::endl;
                return ;
            }
        }
        std::cout << YELLOW << this->name << ": was not in workshop" << RESET << std::endl;
    }

    void    work(Workshop *workshop) {
         for (long unsigned int i = 0; i < this->workshops.size(); i++) {
            if (this->workshops[i] == workshop) {
                std::cout << BLUE << this->name << " is working !" << RESET << std::endl;
                return ;
            }
        }
        std::cout << YELLOW << this->name << " is not registered to this workshop and cannot work !" << RESET << std::endl;
    }

 private:

    std::string  name;

    std::vector<Tool *>         tools;              // Aggregation relationship : the worker can own a tool, but the tool can live without the worker
    std::vector<Workshop *>    workshops;           // Association relationship : the worker does not own the workshop, but both know about each other

};

#endif // WORKER_HPP