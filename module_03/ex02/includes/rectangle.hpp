#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle : public Shape {

public:
  Rectangle(double h, double w) {
    this->height = h;
    this->width = w;
  }
  ~Rectangle() {}

  double area_calculator() { return (height * width); }
  double perimeter_calculator() { return (height * 2 + width * 2); }

  double height;
  double width;
};

#endif
