#ifndef WORKSHOP_HPP
# define WORKSHOP_HPP

# include "Worker.hpp"
# include "Colors.hpp"
# include <vector>

class Workshop {

 public:

    // Constructor/Destructor
    Workshop() {
        std::cout << GREEN << "Workshop constructor called" << RESET << std::endl;
    }
    ~Workshop() {
        std::cout << RED << "Workshop destructor called" << RESET << std::endl;
    }

    void    register_worker(Worker *worker) {
        for (long unsigned int i = 0; i < this->workers.size(); i++) {
            if (this->workers[i] == worker) {
                std::cout << YELLOW << "Workshop: Worker is already registered" << RESET << std::endl;
                return ;
            }
        }
        worker->add_workshop(this);
        this->workers.push_back(worker);
        std::cout << BLUE << "Workshop: a Worker has joined" << RESET << std::endl;
    }

    void    release_worker(Worker *worker) {
        for (long unsigned int i = 0; i < this->workers.size(); i++) {
            if (this->workers[i] == worker) {
                worker->remove_workshop(this);
                this->workers.erase(this->workers.begin() + i);
                std::cout << BLUE << "Workshop: a Worker has left" << RESET << std::endl;
                return ;
            }
        }
        std::cout << YELLOW << "Workshop: worker was not registered" << RESET << std::endl;

    }

    void    execute_work_day() {
        for (long unsigned int i = 0; i < this->workers.size(); i++) {
            this->workers[i]->work(this);
        }
    }

 private:

    std::vector<Worker *> workers;

};


#endif // WORKSHOP_HPP