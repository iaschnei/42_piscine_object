#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP

# include "shape.hpp"

class Triangle : public Shape {

 public:

    Triangle(int a, int b, int c, int h) { this->side_a = a; this->side_b = b; this->side_c = c; this->height = h;}
    ~Triangle() {}

    // Since we're returning an int pi is simplified to 3
    int area_calculator(const Shape &shape) {
        return (side_b * height / 2);
    }
    int perimeter_calculator(const Shape &shape) {
        return (side_a + side_b + side_c);
    }

    int side_a;
    int side_b;
    int side_c;
    int height;

};

#endif