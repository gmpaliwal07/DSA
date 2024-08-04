#include<bits/stdc++.h>
using namespace std;
int RangeSum(vector<int> arr) {
    int n = arr.size();
    vector<int> ele;
    int ans= 0;

    sum = 0;
    for(auto i = 0; i < arr.size(); i++) {
        for(auto j = 0; j < i; j++) {
            sum+=j;
        }
        ele.push_back(sum);
    } 
    for(auto it : ele) {
        ans+=it;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,2,3,4};
cout << RangeSum(arr);
return 0;
}