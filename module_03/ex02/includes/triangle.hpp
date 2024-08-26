#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shape.hpp"

class Triangle : public Shape {

public:
  Triangle(double a, double b, double c, double h) {
    this->side_a = a;
    this->side_b = b;
    this->side_c = c;
    this->height = h;
  }
  ~Triangle() {}

  double area_calculator() { return ((side_b / 2) * height); }
  double perimeter_calculator() { return (side_a + side_b + side_c); }

  double side_a;
  double side_b;
  double side_c;
  double height;
};

#endif
