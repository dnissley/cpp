#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct vertex 
{
    int id;
    vector<vertex*> ns;
};

void PrintVertex(vertex &v)
{
    cout << "    " << "Vertex " << v.id << " has neighbors:" << endl;
    for (auto n : v.ns) {
        cout << "        " << n->id << endl;
    }
    cout << endl;
}

void PrintGraph(vector<vertex*> &graph)
{
    cout << "GRAPH:" << endl;
    for (auto v : graph) {
        PrintVertex(*v);
    }
}

void ReplaceVertex(vertex &v, vertex &find, vertex &replace) 
{
    for (auto it = v.ns.begin(); it != v.ns.end(); ++it) {
        if (*it == &find)
            *it = &replace;
    }
}

void ReplaceVertex(vector<vertex*> &graph, vertex &find, vertex &replace)
{
    for (vertex *v : graph) {
        ReplaceVertex(*v, find, replace);
    }
}

int main()
{
    vector<vertex> vs(4);

    // TODO: Replace the below section to load from a file.

    vs[0].id = 0;
    vs[1].id = 1;
    vs[2].id = 2;
    vs[3].id = 3;

    vs[0].ns.push_back(&vs[1]);
    vs[0].ns.push_back(&vs[2]);

    vs[1].ns.push_back(&vs[0]);
    vs[1].ns.push_back(&vs[2]);
    vs[1].ns.push_back(&vs[3]);

    vs[2].ns.push_back(&vs[0]);
    vs[2].ns.push_back(&vs[1]);
    vs[2].ns.push_back(&vs[3]);

    vs[3].ns.push_back(&vs[1]);
    vs[3].ns.push_back(&vs[2]);

    vector<vertex*> graph;

    for (int i = 0; i != vs.size(); ++i)
        graph.push_back(&vs[i]);
    
    // TESTING BELOW HERE

    PrintGraph(graph);

    // Replace references to the vertex being contracted, deleting self-references as it goes
    ReplaceVertex(graph, vs[0], vs[2]);

    // TODO: Remove self references

    // Remove the vertex being contracted
    graph.erase(graph.begin());

    PrintGraph(graph);
}

