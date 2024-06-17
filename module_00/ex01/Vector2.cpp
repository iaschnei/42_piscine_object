#include "includes/Vector2.hpp"

Vector2::Vector2(int x, int y) : X(x), Y(y) {
    return ;
}

float   Vector2::get_x_value() const {
    return (this->X);
}

float   Vector2::get_y_value() const {
    return (this->Y);
}
