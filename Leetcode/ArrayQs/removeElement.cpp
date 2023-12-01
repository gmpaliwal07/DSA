#include<bits/stdc++.h>
using namespace std;
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
    int j = 0; 

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[j++] = nums[i]; 
        }
    }

    return j; 
    }

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n ,key; 
cin >> n >> key;

vector<int> arr;
for(auto i = 0; i < n; i ++) {
    int a;
    cin >> a;
    arr.push_back(a);
}
removeElement(arr,key);
return 0;
}