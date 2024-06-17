#ifndef VECTOR2_HPP
# define VECTOR2_HPP

struct Vector2 {

 public:

    Vector2(int x, int y);

    float get_x_value() const;
    float get_y_value() const;

 private:

    float X;
    float Y;
};


#endif // VECTOR2_HPP