#include<bits/stdc++.h>
using namespace std;
   vector<int> productExceptSelf(vector<int>& nums) {
               vector<int> result(nums.size(),1);
           
          // Compute prefix products
    int prefix = 1;
    for (int i = 0; i < nums.size(); i++) {
        result[i] = prefix;
        prefix *= nums[i];
    }

    // Compute suffix products and multiply with prefix products
    int suffix = 1;
    for (int i = nums.size() - 1; i >= 0; i--) {
        result[i] *= suffix;
        suffix *= nums[i];
    }

    return result;
   }
int main(int argc, char const *argv[])
{
#ifndef ONLNE_JUDGE
freopen("intput.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> nums = {1,2,3,4};
vector<int> ans = productExceptSelf(nums);
for(auto it : ans){
    cout << it << " ";
}
return 0;
}