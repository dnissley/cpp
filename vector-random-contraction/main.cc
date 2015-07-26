#include <cstddef>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

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

vector<int> &Split(const string &s, char delim, vector<int> &elems) 
{
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        try {
            int i = stoi(item);
            elems.push_back(i);
            cout << "Converting " << item << " to int" << endl;
        }
        catch(...) {}
    }
    return elems;
}

vector<int> Split(const string &s, char delim) 
{
    vector<int> elems;
    Split(s, delim, elems);
    return elems;
}

void ReplaceVertex(vertex &v, vertex &find, vertex &replace) 
{
    for (auto it = v.ns.begin(); it != v.ns.end(); ++it) {
        if (*it == &find) {
            cout << "Replacing reference to vertex " << find.id << " with reference to vertex " << replace.id << endl;
            *it = &replace;
            cout << "    ...done." << endl;
        }
    }
}

void ReplaceVertex(vector<vertex*> &graph, vertex &find, vertex &replace)
{
    for (vertex *v : graph) {
        ReplaceVertex(*v, find, replace);
    }
}

void RemoveSelfReferences(vertex &v)
{
    for (size_t i = v.ns.size()-1; i < v.ns.size(); --i) {
        if (v.ns[i] == &v) {
            cout << "Removing self-reference from vertex " << v.id << endl;
            v.ns.erase(v.ns.begin() + i);
            cout << "    ...done." << endl;
        }
    }
}

void Contract(vector<vertex*> &graph, int v1i, int v2i) 
{
    vertex &v1 = *graph[v1i];
    vertex &v2 = *graph[v2i];

    // Add neighbors from v2 to v1
    for (vertex *n : v2.ns) {
        if (n != &v1) {
            cout << "Adding a neighbor vertex " << n->id << " to vertex " << v1.id << endl;
            v1.ns.push_back(n);
            cout << "    ...done." << endl;
        }
    }

    // Replace references to the vertex being contracted
    ReplaceVertex(graph, v2, v1);

    // Remove self references
    RemoveSelfReferences(v1);

    // Remove the vertex being contracted
    cout << "Removing contracted vertex " << v2.id << endl;
    graph.erase(graph.begin() + v2i);
    cout << "    ...done." << endl;

}

int CalculateMinCut(vector<vertex> &vs)
{
    srand(time(0));

    vector<vertex*> graph;

    for (int i = 0; i != vs.size(); ++i)
        graph.push_back(&vs[i]);

    while (graph.size() > 2) {
        size_t edges = 0;

        for (vertex *v : graph)
            edges += v->ns.size();

        size_t e = rand() % edges;
        size_t v1i, v2i;

        for (v1i = 0; v1i < graph.size(); ++v1i) {
            if (e < graph[v1i]->ns.size())
                break;
            e -= graph[v1i]->ns.size();
        }

        int v2id = graph[v1i]->ns[e]->id;
        for (v2i = 0; v2i < graph.size(); ++v2i) {
            if (graph[v2i]->id == v2id)
                break;
        }

        cout << "Contract " << v1i << ", " << v2i << endl;

        Contract(graph, v1i, v2i);
    }

    PrintGraph(graph);

    return graph[0]->ns.size();
}

vector<vertex> VerticesFromStrings(vector<string> lines)
{
    vector<vertex> vs(lines.size());

    for (size_t i = 0; i != lines.size(); ++i) {
        vector<int> ns = Split(lines[i], '\t');
        vs[i].id = ns[0];
        for (size_t j = 1; j != ns.size(); ++j) {
            vs[i].ns.push_back(&vs[ns[j]-1]);
        }
    }
    
    return vs;
}

int main()
{
    int min = 0;

    vector<string> lines;
    string input;
    while (getline(cin, input))
        lines.push_back(input);

    for (int i = 0; i != 100; ++i) {
        vector<vertex> vs = VerticesFromStrings(lines);
        int cuts = CalculateMinCut(vs);
        if (min == 0 || cuts < min)
            min = cuts;
    }

    cout << "After 100 tries, the min cut was: " << min << endl;
}

