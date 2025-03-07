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
bool isprime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<int> closestPrimes(ll left, ll right) {
    vector<ll> primeNum;
    for (ll i = left; i <= right; i++) {
        if (isprime(i)) primeNum.push_back(i);
    }

    if (primeNum.size() < 2) {
        cout << "-1 -1\n"; // No closest prime pair exists
        return;
    }

    ll gp = LLONG_MAX;
    ll lb  = 0, rb = 0;

    for (size_t i = 1; i < primeNum.size(); i++) {
        ll gap = primeNum[i] - primeNum[i - 1];
        if (gap < gp) {
            gp = gap;
            lb = primeNum[i - 1];
            rb = primeNum[i];
        }
    }
    return {lb,rb};
}
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
ll left = 11, right = 19;
closestPrimes(left, right);

return 0;
}