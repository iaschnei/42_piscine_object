#include "includes/Graph.hpp"

Graph::Graph(float x, float y) {

    this->size = new Vector2(x, y);
    return ;
}

Graph::~Graph() {

    this->points.clear();
    delete(this->size);
    return ;
}

void    Graph::add_new_point(float x, float y) {

    if (x > this->size->get_x_value() || y > this->size->get_y_value()) {
        std::cout << RED << "Warning: point " << x << "/" << y << " is out of graph range, it will not be added." << RESET << std::endl;
        return ;
    }
    
    this->points.push_back(Vector2(x, y));
    return ;
}

void    Graph::draw_graph() {

    std::list<Vector2>::iterator it;

    bool    drew_point = false;

    for (int draw_y = this->size->get_y_value(); draw_y >= 0; draw_y --) {

        std::cout << draw_y << " ";

        for (int draw_x = 0; draw_x <= this->size->get_x_value(); draw_x++) {

            for (it = this->points.begin(); it != this->points.end(); it++) {

                if (it->get_x_value() == draw_x && it->get_y_value() == draw_y && drew_point == false) {
                    std::cout << "X ";
                    drew_point = true;
                }
            }
            if (drew_point == false) {
                std::cout << ". ";
            }
            drew_point = false;
        }
        std::cout << std::endl;
    }

    std::cout << "  ";
    for (int i = 0; i <= this->size->get_x_value(); i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}