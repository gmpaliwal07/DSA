#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph {
public:
    unordered_map<T, list<T>> adj;

    // Constructor
    Graph() {}

    // Add edge to the graph
    void add_edge(T n1, T n2, bool bidir = true) {
        adj[n1].push_back(n2);
        if (bidir) adj[n2].push_back(n1);
    }

    // Print adjacency list
    void print() {
        for (auto it : adj) {
            cout << it.first << "-->";
            for (auto ele : it.second) {
                cout << ele << "-";
            }
            cout << endl;
        }
    }
};

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Graph<int> g;
    g.add_edge(1, 2);
    g.add_edge(8, 2);
    g.add_edge(2, 3);
    g.add_edge(4, 6);
    g.add_edge(6, 9);
    g.add_edge(7, 1);

    g.print();
    return 0;
}
