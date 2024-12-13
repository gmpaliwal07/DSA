#include <bits/stdc++.h>
using namespace std;

    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0}; 
        vis[0] = 1; 
        queue<int> q;
        q.push(0); 
        vector<int> bfs; 
        while(!q.empty()) {
            int node = q.front(); 
            q.pop(); 
            bfs.push_back(node); 
            for(auto it : adj[node]) {
                // if the neighbour has previously not been visited, 
                // store in Q and mark as visited 
                if(!vis[it]) {
                    vis[it] = 1; 
                    q.push(it); 
                }
            }
        }
        return bfs; 
    }
vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
    vector<int> ans;
    
    }
void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector <int> adj[6];
    
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 4);

    

    return 0;
}