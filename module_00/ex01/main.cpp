#include <iostream>
#include "includes/Graph.hpp"

int main(void) {

    Graph graph = Graph(5, 5);

    graph.add_new_point(0, 0);
    graph.add_new_point(2, 2);
    graph.add_new_point(2, 4);
    graph.add_new_point(4, 2);
    graph.add_new_point(5, 5);
    graph.add_new_point(10, 2);

    graph.draw_graph();
}