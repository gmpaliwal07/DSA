#include<bits/stdc++.h>
using namespace std;
 int findKthLargest(vector<int>& nums, int k) {
    int ans = 0;
    priority_queue<int> pq(nums.begin(), nums.end());

    while(k--){
        int ele = pq.top();
        pq.pop();
        ans = ele;
    }
    return ans;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> nums= {3,2,3,1,2,4,5,5,6};
int k =4;
cout << findKthLargest(nums, k);
return 0;
}