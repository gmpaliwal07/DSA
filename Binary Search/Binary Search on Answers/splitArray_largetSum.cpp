#include<bits/stdc++.h>
using namespace std;
int preCalcualtaion(vector<int> &arr, int maxSum) {
    int n = arr.size(); 
    int partitions = 1;
    long long subarraySum = 0;
    for (int i = 0; i < n; i++) {
        if (subarraySum + arr[i] <= maxSum) {
            
            subarraySum += arr[i];
        }
        else {
            
            partitions++;
            subarraySum = arr[i];
        }
    }
    return partitions;
}
int splitArray(vector<int> &arr, int k) {
    int n  = arr.size();
    int start = *max_element(arr.begin(), arr.end());
    int end = accumulate(arr.begin(), arr.end(), 0);
    while (start <= end)
    {
        int mid = (start + end) /2;
        int partitions = preCalcualtaion(arr, mid);
        if(partitions > k) start = mid +1;
        else end = mid -1;
    }
    return start;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w",stdout);
#endif
int n , k;
cin >> n >> k;
vector<int> arr;
for(auto i = 0; i  < n; i++) {
    int a;
    cin >>a;
    arr.push_back(a);
}
cout << splitArray(arr,k);
return 0;
}