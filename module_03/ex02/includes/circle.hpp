#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

class Circle : public Shape {

public:
  Circle(double r) { this->ray = r; }
  ~Circle() {}

  // Since we're returning an int pi is simplified to 3
  double area_calculator() { return (3.1416 * ray  * ray); }
  double perimeter_calculator() { return (2 * 3.1416 * ray); }

  double ray;
};

#endif
