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
vector<int>  findMissingAndRepeatedValues(vector<vector<int>> &grid) {
    vector<int> ans;
    set<int> st;
    int r = grid.size();
    int c = grid[0].size();
    int size = r*c;
    int stSum = 0;
    int sum = (size*(size+1))/2;
    for(auto it : grid) {
        for(auto ele : it) {
            if(st.find(ele) != st.end()){
                ans.push_back(ele);
             
            }
            else{
                st.insert(ele);
                stSum+=ele;
            }
        }
    }

    ans.push_back(abs(sum-stSum));
return ans;

}
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif

vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
findMissingAndRepeatedValues(grid);
return 0;
}