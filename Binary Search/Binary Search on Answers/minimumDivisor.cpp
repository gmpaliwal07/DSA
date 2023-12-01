#include<bits/stdc++.h>
using namespace std;
int minimumDivisor(vector<int> &arr, int limit) {
    int ans = INT_MAX;
    int start = 1;
    int end = *max_element(arr.begin(), arr.end());
    if(arr.size() == limit) return end;
    while (start <=end) 
    {
        int mid = (start + end) / 2;
        int sum = 0;
        for (auto i = 0; i < arr.size(); i++) 
        {
            sum += ceil((double)arr[i] / mid);
        }
        if (sum <= limit) 
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
int n, limit;
cin >> n >> limit;
vector<int> arr;
for(auto i = 0; i < n; i++ ){
    int a;
    cin >> a;
    arr.push_back(a);
}
cout << minimumDivisor(arr,limit);
return 0;
}