#include<bits/stdc++.h>
using namespace std;
int maxiSum(vector<int> &arr) {
    int sum = 0;
    int maxi =  arr[0];
    for (auto i = 0; i < arr.size(); i++)
    {
        sum+=arr[i];
        maxi = max(sum, maxi);
        if(sum < 0) sum = 0;

    }
    return maxi;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr;
int n ;
cin >> n;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}
cout << maxiSum(arr);
return 0;
}