#ifndef GRAPH_HPP
# define GRAPH_HPP

# include "Vector2.hpp"
# include "Colors.hpp"
# include <list>
# include <iostream>

class Graph {

 public:

    Graph(float x, float y);
    ~Graph();

    void    add_new_point(float x, float y);
    void    draw_graph();

 private:

    Vector2             *size;
    std::list<Vector2>  points;

};

#endif // GRAPH_HPP