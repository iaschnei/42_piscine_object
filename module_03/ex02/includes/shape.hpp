#ifndef SHAPE_HPP
# define SHAPE_HPP

class Shape {

 public:

    Shape() {}
    virtual ~Shape() {}

    virtual int area_calculator(const Shape &shape) = 0;
    virtual int perimeter_calculator(const Shape &shape) = 0;

};

#endif