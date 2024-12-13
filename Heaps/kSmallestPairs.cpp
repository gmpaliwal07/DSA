#include<bits/stdc++.h>
using namespace std;
  vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
     
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    vector<vector<int>> ans;


    if (nums1.empty() || nums2.empty()) return ans;


    for (int i = 0; i < min((int)nums1.size(), k); ++i) {
        pq.emplace(nums1[i] + nums2[0], i, 0);
    }

    while (!pq.empty() && k > 0) {
        auto [sum, i, j] = pq.top();
        pq.pop();

        ans.push_back({nums1[i], nums2[j]});

    
        if (j + 1 < nums2.size()) {
            pq.emplace(nums1[i] + nums2[j + 1], i, j + 1);
        }

        --k; 
    }

    return ans;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt","w", stdout);
#endif
vector<int> nums1 = {1,7,11};
vector<int> nums2 = {2,4,6};
int k = 3;
vector<vector<int>> ans = kSmallestPairs(nums1, nums2, k);
for(auto i = 0 ;  i < ans.size(); i++){
    for(auto j = 0 ; j < ans.size();j++){
        cout << ans[i][j] << " ";
    }
}return 0;
}