#include <bits/stdc++.h>
using namespace std;

int countPartitions(vector<int> &arr, int k) {
    int painter = 1;
    long long countPaintersum = 0;
    for (auto i = 0; i < arr.size(); i++) {
        if (countPaintersum + arr[i] <= k) {
            countPaintersum += arr[i];
        } else {
            painter++;
            countPaintersum = arr[i];
        }
    }
    return painter;
}

int painterPartitions(vector<int> &arr, int k) {
    int n = arr.size();
    int start = *max_element(arr.begin(), arr.end());
    int end = accumulate(arr.begin(), arr.end(), 0);
    
    while (start <= end) {
        int mid = start + (end - start) / 2; 
        int painter = countPartitions(arr, mid);
        if (painter > k) start = mid + 1;
        else end = mid - 1;
    }
    return start;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (auto i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << painterPartitions(arr, k);
    return 0;
}
