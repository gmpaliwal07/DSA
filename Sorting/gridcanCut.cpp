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
bool check(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    
    int sections = 0;
    int max_end = intervals[0][1];
    
    for (auto& interval : intervals) {
        int start = interval[0], end = interval[1];
        if (max_end <= start) {
            sections++;
        }
        max_end = max(max_end, end);
    }
    
    return sections >= 2;
}

bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
    vector<vector<int>> x_intervals, y_intervals;
    
    for (auto& rect : rectangles) {
        x_intervals.push_back({rect[0], rect[2]});
        y_intervals.push_back({rect[1], rect[3]});
    }
    
    return check(x_intervals) || check(y_intervals);
}

int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
int n = 5;

vector<vector<int>> rectangles = {
    {1, 0, 5, 2},
    {0, 2, 2, 4},
    {3, 2, 5, 3},
    {0, 4, 4, 5}
};

cout << checkValidCuts(n, rectangles) << endl;
return 0;
}