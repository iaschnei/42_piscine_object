#ifndef STATISTIC_HPP
# define STATISTIC_HPP

# include <iostream>
# include "Colors.hpp"

struct Statistic {

 public:

    // Constructor
    Statistic(int exp_val = 0, int level_val = 0) : level(level_val), exp(exp_val) {
        std::cout << GREEN << "Statistic constructor called" << RESET << std::endl;
    }

    ~Statistic() {
        std::cout << RED << "Statistic destructor called" << RESET << std::endl;
    }

    // Getters
    int get_level() const { 
        return level; 
    }

    int get_exp() const { 
        return exp; 
    }

    // Setters
    void set_level(int level_val) { 
        level = level_val; 
    }

    void set_exp(int exp_val) { 
        exp = exp_val; 
    }

 private:

    int level;
    int exp;
};

#endif // STATISTIC_HPP