#include<bits/stdc++.h>
using namespace std;
int jump(vector<int>& nums) {
      int jumps = 0;           
        int l = 0;   
        int r = 0;     
      
        for (int i = 0; i < nums.size() - 1; ++i) {
         
            l = max(l, i + nums[i]);
     
            if (r == i) {
                jumps++;
                r = l; 
            }
        }
      
        return jumps;  
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {2,3,1,4,1,1,1,2};
cout << jump(arr);
return 0;
}