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
string t1, t2;
cin >> t1 >> t2;


// Parse first time
ll h1 = stoi(t1.substr(0,2));
ll m1 = stoi(t1.substr(3,2));

// Parse second time
ll h2 = stoi(t2.substr(0,2));
ll m2 = stoi(t2.substr(3,2));

// Calculate middle time
ll time1 = h1*60 + m1;
ll time2 = h2*60 + m2;
ll t = (time1 + time2)/2;
cout << setfill('0') << setw(2) << t/60 << ":" << setfill('0') << setw(2) << t%60 << endl;
    

return 0;
}