#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      set<int> set1(nums1.begin(), nums1.end());
    set<int> set2(nums2.begin(), nums2.end());

    // elements in set1 not in set2
    vector<int> diff1;
    for (int num : set1) {
        if (set2.find(num) == set2.end()) {
            diff1.push_back(num);
        }
    }

    // elements in set2  not in set1
    vector<int> diff2;
    for (int num : set2) {
        if (set1.find(num) == set1.end()) {
            diff2.push_back(num);
        }
    }

    return {diff1, diff2};
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> &num1 = {1,2,3,4,5};
vector<int> &num2 = {1,2,3,4,5,6};
return 0;
}