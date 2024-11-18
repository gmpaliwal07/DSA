#include<bits/stdc++.h>
using namespace std;
bool containsDuplicates(vector<int> &nums, int k ) {
    bool flag = false;

    unordered_map<int, int> window;
    for(auto i = 0; i < nums.size(); i++) {
        if(window.find(nums[i]) != window.find()) flag = true;

        window.insert(nums[i]);

        if(window.size() > k) {
            window.erase(nums[i-k]);
        }

    }
    return flag;
 }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> nums = {1,0,1,1};
int k = 3;
cout << containsDuplicates(nums,k) ;

return 0;
}