#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ump unordered_map
#define loopiter(it, a) for (auto it : a)

void file_i_o() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Graph {
public:
    list<int> *adj;
    int V;

    Graph(int V) {
        this->V = V;
        this->adj = new list<int>[V];
    }

    ~Graph() { delete[] adj; }  // Fix memory leak

    void addEdge(int u, int v, bool bidir = true) {
        adj[u].push_back(v);
        if (bidir) {
            adj[v].push_back(u);
        }
    }

    int dfsHelper(int src, ump<int, bool> &vis) {
        int cnt = 1;  // Count the current node
        vis[src] = true;
        loopiter(it, adj[src]) {
            if (!vis[it]) {
                cnt += dfsHelper(it, vis);  // Accumulate count
            }
        }
        return cnt;
    }

    int dfs(int src) {
        ump<int, bool> vis;
        return dfsHelper(src, vis);
    }
};

int main() {
    clock_t begin = clock();
    file_i_o();

    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(3, 4);

    cout << g.dfs(0) << endl;

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms\n";
#endif

    return 0;
}
