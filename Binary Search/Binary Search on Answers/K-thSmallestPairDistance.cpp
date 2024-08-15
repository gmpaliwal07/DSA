#include<bits/stdc++.h>
using namespace std;
 int smallestDistancePair(vector<int>& nums, int k) {
    int ans  =INT_MAX;
    int start =1;
    int end = *max_element(nums.begin(), nums.end());
 if(nums.size() == k) return 0;
while (start <=end) 
    {
        int mid = (start + end) / 2;
        int sub = 0;
        int j = 0;
        for (auto i = 0; i < nums.size(); i++) 
        {
            sub = abs(nums[i] - nums[j]);
            j++;
        }
        if (sub < k) 
        {
            ans = mid;
            end = mid - 1;
        } 
        else 
        {
            start = mid + 1;
        }
    }
    return ans;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,3,1};
int k = 1;
cout << smallestDistancePair(arr, k);
return 0;
}