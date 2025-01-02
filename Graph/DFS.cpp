#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld  long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vi,greater<ll>>
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define loopiter(it,a) for(auto it : a)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;
void file_i_o()
{
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

    void addEdge(int u, int v, bool bidir = true) {
        adj[u].pb(v);
        if(bidir) {
            adj[v].pb(u);
        }
    }

void dfsHelper(int src, ump<int,bool> &vis) {
    vis[src] = true;
    cout << src<<  " ";
  loopiter(it, adj[src]) {
      if(!vis[it]) {
          dfsHelper(it, vis);
      }
  }
}
    void dfs(int src) {
        ump<int,bool> vis;
        dfsHelper(src, vis);
    }

};
int main(int argc, char const *argv[])
{
file_i_o();
Graph g(5);
g.addEdge(0,1);
g.addEdge(0,2);
g.addEdge(0,3);
g.addEdge(1,2);
g.addEdge(2,3);

g.dfs(0);


return 0;
}