#include<bits/stdc++.h>
using namespace std;
int RangeQuerySum(vector<int> &arr, int l, int r) {
    vector<int> prefixSum(arr.size());
    prefixSum[0] = arr[0];
    for(auto i = 1; i < arr.size(); i++ ){
        prefixSum[i] = prefixSum[i-1]+arr[i];
    }
    if(l == 0) return prefixSum[r];
    return prefixSum[r]- prefixSum[l-1]; 
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {2,4,5,7,8};
int l = 0, r = 2;
cout << RangeQuerySum(arr, l, r);
return 0;
}