#ifndef TOOL_HPP
# define TOOL_HPP

# include <string>

class Worker;

class Tool {

 public:

    // Constructor/Destructor
    Tool(int use_val = 10) : number_of_uses(use_val) { 
        this->holding_worker = NULL; 
        std::cout << GREEN << "Tool constructor called" << RESET << std::endl;
    }
    virtual ~Tool() {
        std::cout << RED << "Tool destructor called" << RESET << std::endl;
    }

    virtual void use() = 0;

    // Getter
    Worker      *get_holding_worker() { return holding_worker; }
    std::string get_type() { return type; }

    // Setter
    void    set_holding_worker(Worker *worker) { this->holding_worker = worker; }

 protected:

    int             number_of_uses;
    std::string     type;
    Worker          *holding_worker;

};


#endif