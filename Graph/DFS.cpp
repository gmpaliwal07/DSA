#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> adj[], int vis[], vector<int> &ans) {
    vis[node] = 1;
    ans.push_back(node);
    for(auto it : adj[node]) {
        if(!vis[it]) {
            dfs(it, adj, vis, ans);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    int vis[V] = {0};
    int start = 0;
    vector<int> ans;
    dfs(start, adj,vis,ans);
    return ans;
    
}
void addEdge(vector<int> adj[], int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);  // undirected graph
}
void printAns(vector<int> &ans) {
    for(auto it : ans) {
        cout << it << " ";
    }
}

int main(int argc, char const *argv[])

{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt" ,"w", stdout);
#endif
    vector<int> adj[6];
      addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);
    vector<int> ans = dfsOfGraph(5,adj);
    printAns(ans);
return 0;
}