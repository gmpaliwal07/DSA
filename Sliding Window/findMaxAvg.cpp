#include<bits/stdc++.h>
using namespace std;
double findMaxAverage(vector<int> &nums, int k) {
    double maxSum = 0.0;
    for(auto i = 0; i < k; i++ ){
        maxSum +=nums[i];

    }
    double currentSum = maxSum;
    for (int i = k; i < n; i++) {
        currentSum += nums[i] - nums[i - k];  
        maxSum = max(maxSum, currentSum); 
    }

    return maxSum / k;

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r", stdin);   
freopen("output.txt", "w", stdout);
#endif
vector<int> nums = {1,12,-5,-6,50,3};
int k = 4;

return 0;
}