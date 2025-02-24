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
int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount){
    int n = amount.size();

    vector<vector<int>> tree(n);

    // build tree
    for(auto& it : edges){
        int u = edges[0], v = edges[1];
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vector<int> bob_time = (n, INT_MAX);

    vector<int> path;

    function<bool(int,int int)> findBobPath = [&](int node, int parent, int time) {
        if(node == 0){ // at root (bob)
            path.push_back(node);
            reverse(path.begin(), path.end());
            for(auto t = 0; t < path.size(); t++) bob_time[path[t]] =t;

            return true;
        }
        path.push_back(node);

        for(auto it : tree[node] ){
            if(it != parent && findBobPath(it, node, time+1) )
            return true;
        }
        path.pop_back();
        return false;
    };

    findBobPath(bob, -1, 0);

    function<void(int, int, int, int)> dfs = [&](int node, int parent, int time, int profit) {
        // Alice and Bob meet → Alice gets only half of the amount
        if (time == bob_time[node]) 
            profit += amount[node] / 2;
        else if (time < bob_time[node]) // Alice alone
            profit += amount[node];

        // If it's a leaf node (except root)
        if (tree[node].size() == 1 && node != 0) {
            max_profit = max(max_profit, profit);
            return;
        }

        // Explore child nodes
        for (int neighbor : tree[node]) {
            if (neighbor != parent) 
                dfs(neighbor, node, time + 1, profit);
        }
    };

    dfs(0, -1, 0, 0); // Start DFS from root (0)

    return max_profit;


}
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif

return 0;
}