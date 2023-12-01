#include<bits/stdc++.h>
using namespace std;
int longestSubArray(vector<int> &arr, int k) {
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n, k;
cin >> n >> k;
vector<int> arr;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.emplace_back(a);
}
cout << longestSubArray(arr,k);
return 0;
}