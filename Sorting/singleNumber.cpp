#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
    int res = 0;
    for(int i = 0; i < nums.size(); i++){
        res ^= nums[i];
    }
    return res;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {2,2,1};
cout << singleNumber(arr);
return 0;
}