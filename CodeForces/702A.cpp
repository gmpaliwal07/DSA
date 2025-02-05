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
int MaxLengthSubarray(vector<int> &nums) {

    int cnt = 1, maxi = 0;
    loop(i,1,nums.size()){
        if(nums[i] >  nums[i-1]){
            cnt++;
        }
        else {
        maxi = max(maxi,cnt);
        cnt = 1;
        }
    }
    maxi = max(maxi, cnt);
    return maxi;
}
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
int n;
cin >> n;
vector<int> arr;
loop(i,0,n) {
   int a;
    cin >> a;
    arr.push_back(a);
}
cout << MaxLengthSubarray(arr);



return 0;
}