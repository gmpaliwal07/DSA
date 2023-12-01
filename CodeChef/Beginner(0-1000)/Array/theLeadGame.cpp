#include<bits/stdc++.h>
using namespace std;
void theLeadGame(vector<int> &arr) {
    vector<int> vec;
  int n  =vec.size();
    int res;
    for (int i = 0; i <= 1; i++) {
        res = abs(arr[i] - arr[n-1]);
        vec.push_back(res);
    }
    
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--) {
        vector<int> arr;
        for(auto i = 0; i < 2; i++) {
            int a;
            cin >> a;
            arr.push_back(a);
        theLeadGame(arr);
        }
    }
	return 0;
}