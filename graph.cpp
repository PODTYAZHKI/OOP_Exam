#include "graph.h"

Graph::Graph()
{
    cnt = 0;

}

void Graph::addEdge(std::vector<std::pair<int, int>> gr[], int u, int v, int wt)
{
    gr[u].push_back(std::make_pair(v, wt));
    gr[v].push_back(std::make_pair(u, wt));
    cnt++;
}

void Graph::printGraph(std::vector<std::pair<int, int> > *adj, int V)
{
    int v, w;
        for(int u = 0; u < V; u++)
        {
            std::cout << "Node "<< u << " makes an edge with \n";
            for(auto it = adj[u].begin(); it!=adj[u].end(); it++)
            {
                v = it->first;
                w = it->second;
                std::cout << "\tNode "<< v << " with edge weight ="
                     << w << "\n";
            }
            std::cout << "\n";
        }
        std::cout << cnt << std::endl;

}
int Graph::getSize() const
{
    return cnt;
}
