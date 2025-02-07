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
bool GennadyGame(string c_o_t, vector<string> &c_o_h) {
    char t_r =  c_o_t[0];
    char t_s = c_o_t[1];
    for(auto it : c_o_h) {
           char card_rank = it[0];  
        char card_suit = it[1]; 

        if (card_rank == t_r || card_suit == t_s) {
            return true; 
        }
    }
    return false;
} 
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
string c_o_t;
cin >> c_o_t;
vector<string> c_o_h;
loop(i,0,5){
    string ch;
    cin >> ch;
    c_o_h.push_back(ch);
}

    cout << (GennadyGame(c_o_t, c_o_h) ? "YES" : "NO") << endl;
return 0;
}