#include<bits/stdc++.h>
using namespace std;
  vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
    
 
    for (int i = 0; i < nums.size(); i++) {
        minHeap.push({nums[i], i});
    }

 
    for (int i = 0; i < k; i++) {
        auto [val, idx] = minHeap.top();
        minHeap.pop();
        

        nums[idx] = val * multiplier;
       
        // Push the updated value back into the heap
        minHeap.push({nums[idx], idx});
    }
    
    return nums;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> nums  = {2,1,3,5,6};
int multiplier = 2;
int k = 5;
vector<int> ans = getFinalState(nums, k, multiplier);
for(auto it : ans){
    cout << it << " ";
}
return 0;
}