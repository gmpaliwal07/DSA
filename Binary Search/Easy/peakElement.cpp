#include<bits/stdc++.h>
using namespace std;
int peakElement(vector<int> &arr) {
    int n = arr.size();
   if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;

    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;     
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            return mid;
        if (arr[mid] > arr[mid - 1]) low = mid + 1; 
        else high = mid - 1;
    }
    
    return -1;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

vector<int> arr;
int n;
cin >> n;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}

cout << peakElement(arr);
return 0;
}