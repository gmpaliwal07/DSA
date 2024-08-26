#include<bits/stdc++.h>
using namespace std;
int pivotElement(vector<int> &arr)
{
    int sum = 0;
    int left_sum = 0;
    for(auto it : arr) sum+=it;
    for(auto i =0; i< arr.size(); i++){
        if(left_sum == sum - left_sum-arr[i]) return i;
        left_sum+=arr[i];
    }
    return -1;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,7,3,6,5,6};
return 0;
}