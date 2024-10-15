#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int nodes = 5, edges =6;
// matrix method
// int adj[nodes+1][edges+1];
// //graph with complexity n^2;
// for(auto i = 0; i < edges; i++){
//     int u, v;
//     cin >> u >> v;
//     adj[u][v] = 1;
//     adj[v][u] = 1;

// }

//list spcae = O(2E) and O(n);
vector<int> adj[nodes+1];
for(auto i = 0; i < edges; i ++) {
    int u , v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);

}
return 0;
}