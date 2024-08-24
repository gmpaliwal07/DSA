#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &arr) {
       int ans = 0;
        int i = 0, j = height.size() - 1;
        
        while (i < j) {
            int currentArea = (j - i) * min(height[i], height[j]);
            // Update the maximum area found
            ans = max(ans, currentArea);
            
            // Move the pointer pointing to the shorter line
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
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
vector<int> height = {1,8,6,2,5,4,8,3,7};
cout << maxArea(height);
return 0;
}