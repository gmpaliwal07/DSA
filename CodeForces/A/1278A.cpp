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
ll t;
cin >> t;
while(t--) {
    string p,h;
   ll tag=0;
    cin>>p>>h;
    ll lenP=p.size();
    ll lenH=h.size();
    if(lenP>lenH)
    {
        cout<<"NO"<<endl;
        continue;
    }
    sort(p.begin(),p.end());
    for(auto i=0; i<=(lenH-lenP); i++)
    {
        string s=h.substr(i,lenP);
        sort(s.begin(),s.end());
        if(s==p)
        {
            tag=1;
            break;
        }
    }
    if(tag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

   
}
return 0;
}