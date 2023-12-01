#include<bits/stdc++.h>
using namespace std;

int ChefAndDolls(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int ans = 0; 
    for(int i = 0; i < arr.size(); i += 2) { 
        if (arr[i] != arr[i + 1]) {
            ans = arr[i];
            break;
        }
    }
    return ans;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    #endif
    std::vector<int> arr; 
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;

        for(auto i = 0; i < n ; i++) {
            int a;
            cin >>a;
            arr.push_back(a);
        }
    }
    
    cout << ChefAndDolls(arr);
    return 0;
}