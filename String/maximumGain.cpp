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
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
string s = "cdbcbbaaabab";
int x = 4, y = 5;
int total = 0;


   auto remove = [&](string& str, string pattern, int val) {
        string stack = "";
        int score = 0;
        for (char c : str) {
            if (!stack.empty() && stack.back() == pattern[0] && c == pattern[1]) {
                stack.pop_back();  // remove the matched pair
                score += val;
            } else {
                stack.push_back(c);
            }
        }
        str = stack;
        return score;
    };

    int total = 0;
    if (x > y) {
        total += remove(s, "ab", x);
        total += remove(s, "ba", y);
    } else {
        total += remove(s, "ba", y);
        total += remove(s, "ab", x);
    }
cout << total;



return 0;
}