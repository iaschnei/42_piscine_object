#include "includes/Colors.hpp"
#include "includes/circle.hpp"
#include "includes/rectangle.hpp"
#include "includes/shape.hpp"
#include "includes/triangle.hpp"
#include <iostream>

int main(void) {

  Rectangle *base_rect = new Rectangle(4, 5);
  Triangle *base_tri = new Triangle(17, 21, 10, 8);
  Circle *base_circ = new Circle(7);

  std::cout << YELLOW << "Rectangle area is : " << base_rect->area_calculator()
            << ". And perimeter is : " << base_rect->perimeter_calculator()
            << RESET << std::endl;

  std::cout << YELLOW << "Triangle area is : " << base_tri->area_calculator()
            << ". And perimeter is : " << base_tri->perimeter_calculator()
            << RESET << std::endl;

  std::cout << YELLOW << "Circle area is : " << base_circ->area_calculator()
            << ". And perimeter is : " << base_circ->perimeter_calculator()
            << RESET << std::endl;

  Shape *rect = new Rectangle(4, 5);
  Shape *tri = new Triangle(17, 21, 10, 8);
  Shape *circ = new Circle(7);

  std::cout << YELLOW << "Rectangle area is : " << rect->area_calculator()
            << ". And perimeter is : " << rect->perimeter_calculator() << RESET
            << std::endl;

  std::cout << YELLOW << "Triangle area is : " << tri->area_calculator()
            << ". And perimeter is : " << tri->perimeter_calculator() << RESET
            << std::endl;

  std::cout << YELLOW << "Circle area is : " << circ->area_calculator()
            << ". And perimeter is : " << circ->perimeter_calculator() << RESET
            << std::endl;

  delete rect;
  delete tri;
  delete circ;
}
