#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

# include "shape.hpp"

class Rectangle : public Shape {

 public:

    Rectangle(int h, int w) { this->height = h; this->width = w;}
    ~Rectangle() {}

    int area_calculator(const Shape &shape) {
        return (height * width);
    }
    int perimeter_calculator(const Shape &shape) {
        return (height * 2 + width * 2);
    }

    int height;
    int width;

};

#endif