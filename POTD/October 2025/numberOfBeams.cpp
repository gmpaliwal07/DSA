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
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       
        int i = 0;
        int laser_cnt = 0;
        int cnt = 0;
        int prev = 0;  

        while (i < bank.size()) {
            for (auto it : bank[i]) {   
                if (it == '1') {
                    cnt++;
                }
            }

            if (cnt > 0) {
                laser_cnt += prev * cnt;
                prev = cnt;
            }

            cnt = 0;           
            i++;
        }
        return laser_cnt;
    }
};
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif

vector<string> bank = {"011001", "000000" , "010100", "001000"};
Solution sol;
cout << sol.numberOfBeams(bank);


return 0;
}