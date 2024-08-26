#include<bits/stdc++.h>
using namespace std;
#include <vector>
#include <algorithm>

int maxOperations(std::vector<int> &nums, int k) {
    std::sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;
    int cnt = 0;
    
    while (i < j) {
        if (nums[i] + nums[j] == k) {
            cnt++;
            i++;
            j--;
        } else if (nums[i] + nums[j] < k) {
            i++;
        } else {
            j--;
        }
    }
    
    return cnt;
}


int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr= {1,2,3,4};
int k = 5;
cout << maxOperations(arr,k);
return 0;
}