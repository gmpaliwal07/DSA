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
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int dfs(int i, int j, vector<vector<int>> &grid, int n, int m) {
    
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0) return 0;

        int fish = grid[i][j];
        grid[i][j] = 0; 

        for (auto dir : directions) {
            int ni = i + dir.first;
            int nj = j + dir.second;
            fish += dfs(ni, nj, grid, n, m); // Accumulate fish count
        }

        return fish;
    }
int findMaxFish(vector<vector<int>> &grid) {
     int n = grid.size();
    int m = grid[0].size();
    int maxFish = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > 0) { 
                int fish = dfs(i, j, grid, n, m); 
                maxFish = max(maxFish, fish);
            }
        }
    }
    return maxFish;
}
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
vector<vector<int>> grid = {
    {1,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,1}
};

cout << findMaxFish(grid);
return 0;
}