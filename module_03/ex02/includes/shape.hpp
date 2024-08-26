#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {

public:
  Shape() {}
  virtual ~Shape() {}

  virtual double area_calculator() = 0;
  virtual double perimeter_calculator() = 0;
};

#endif
