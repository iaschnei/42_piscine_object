#ifndef CIRCLE_HPP
# define CIRCLE_HPP

# include "shape.hpp"

class Circle : public Shape {

 public:

    Circle(int r) { this->ray = r;}
    ~Circle() {}

    // Since we're returning an int pi is simplified to 3
    int area_calculator(const Shape &shape) {
        return (3 * ray^2);
    }
    int perimeter_calculator(const Shape &shape) {
        return (2 * 3 * ray);
    }

    int ray;

};

#endif