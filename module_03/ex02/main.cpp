#include "includes/shape.hpp"
#include "includes/circle.hpp"
#include "includes/rectangle.hpp"
#include "includes/triangle.hpp"
#include "includes/Colors.hpp"
#include <iostream>

int main(void) {

    Shape *rect = new Rectangle(4, 5);
    Shape *tri = new Triangle(17, 21 , 10, 8);
    Shape *circ = new Circle(7);

    std::cout << YELLOW << "Rectangle area is : " << rect->area_calculator(*rect) << ". And perimeter is : " << rect->perimeter_calculator(*rect) << RESET << std::endl;
    std::cout << YELLOW << "Triangle area is : " << tri->area_calculator(*tri) << ". And perimeter is : " << tri->perimeter_calculator(*tri) << RESET << std::endl;
    std::cout << YELLOW << "Circle area is : " << circ->area_calculator(*circ) << ". And perimeter is : " << circ->perimeter_calculator(*circ) << RESET << std::endl;
}