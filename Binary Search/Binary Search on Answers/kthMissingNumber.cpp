#include <bits/stdc++.h>
using namespace std;

int kthMissingNumber(vector<int> &arr, int k) {
    // int n = arr.size();
    //    for (int i = 0; i < n; i++) {
    //     if (arr[i] <= k) k++; 
    //     else break;
    // }
    // return k;
    // bruteforce
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        int mid = (start+end)/2;
         int ans = arr[mid] - (mid + 1);
        if (ans < k) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return k + end + 1;
    
    
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << kthMissingNumber(arr, k);

    return 0;
}
