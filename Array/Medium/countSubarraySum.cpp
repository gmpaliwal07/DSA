#include <bits/stdc++.h>
using namespace std;

int countMaxSubarraySum(vector<int> &arr, int key) {
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if (sum == key)
                cnt++;
        }
    }
    
    return cnt;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {1, 2, 3};
    int k = 3;
    cout << countMaxSubarraySum(arr, k);
    return 0;
}
