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


int numOfSubarrays(vector<int> &arr) {
    // int sum = 0, cnt = 0;

    // for(auto i = 0; i < arr.size(); i++) {
    //     for(auto j = i; j < arr.size(); j++){
    //         sum+=arr[j];
    //         if(!(sum % 2 == 0)) {
    //             cnt++;
    //         }
    //     }
    //     sum = 0;
    // }
    // return cnt;
    const int MOD = 1e9 + 7;
    int sum = 0, cnt = 0, oddCount = 0, evenCount = 1;  // evenCount=1 for handling prefix sum being odd initially
    
    for(int num : arr) {
        sum += num;
        if (sum % 2) { // If prefix sum is odd
            cnt = (cnt + evenCount) % MOD;  // Add all previous even prefix sums
            oddCount++;  
        } else { // If prefix sum is even
            cnt = (cnt + oddCount) % MOD;  // Add all previous odd prefix sums
            evenCount++;
        }
    }
    return cnt;
}



int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
vector<int> arr = {1,2,3,4,5,6,7};
cout << numOfSubarrays(arr);
return 0;
}