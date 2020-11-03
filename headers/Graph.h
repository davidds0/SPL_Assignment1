//
// Created by David on 31/10/2020.
//

#ifndef GRAPH_H_
#define GRAPH_H_

#include <vector>

class Graph{
public:
    Graph(std::vector<std::vector<int>> matrix);
    std::vector<std::vector<int>> const getMatrix();
    Graph();
    Graph(const Graph& g);

    void infectNode(int nodeInd);
    bool isInfected(int nodeInd);
    void isolateNode(int nodeInd);

private:
    std::vector<std::vector<int>> edges;
    std::vector<bool> infected;
};

#endif