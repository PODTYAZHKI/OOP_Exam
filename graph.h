#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <bits/stdc++.h>

class Graph
{
private:
    int cnt;
public:
    Graph();
//    ~Graph();
    int getSize() const;
    void addEdge(std::vector<std::pair<int, int>> gr[], int u, int v, int wt);
    void printGraph(std::vector<std::pair<int,int> > adj[], int V);
};

#endif // GRAPH_H
