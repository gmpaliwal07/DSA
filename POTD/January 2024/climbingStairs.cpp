#include<bits/stdc++.h>
using namespace std;
int StairsCounting(vector<int> &arr){
    int n =arr.size();
    if(n <=2 )
    {
        return n;
    }
    vector<int> dp(n+1, 0);
    dp[1] =1;
    dp[2] = 2;
    for (auto  it = 3; it <= n; it++) {
        dp[it] = dp[it - 1] + dp[it - 2];
    }

    return dp[n];

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int  n;
cin >> n;
vector<int> arr;
for(auto it = 0; it < n; it++) {
    int a;
    cin >> a;
    arr.push_back(a);
}
cout << StairsCounting(arr);
return 0;
}