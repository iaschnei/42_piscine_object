#ifndef POSITION_HPP
# define POSITION_HPP

# include <iostream>
# include "Colors.hpp"

struct Position {

 public:

    // Constructor
    Position(int x_val = 0, int y_val = 0, int z_val = 0) : x(x_val), y(y_val), z(z_val) {
        std::cout << GREEN << "Position constructor called" << RESET << std::endl;
    }

    ~Position() {
        std::cout << RED << "Position destructor called" << RESET << std::endl;
    }

    // Getters
    int get_x() const { 
        return x; 
    }

    int get_y() const { 
        return y; 
    }

    int get_z() const { 
        return z; 
    }

    // Setters
    void set_x(int x_val) { 
        x = x_val; 
    }

    void set_y(int y_val) { 
        y = y_val; 
    }

    void set_z(int z_val) { 
        z = z_val; 
    }

 private:

    int x;
    int y;
    int z;
};

#endif // POSITION_HPP