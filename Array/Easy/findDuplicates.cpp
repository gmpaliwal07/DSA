#include<bits/stdc++.h>
using namespace std;
 vector<int> duplicates(vector<int> &arr) {
    int n = arr.size();
 vector<int> result;
    
    for (int i = 0; i < n; ++i) {
        int index = arr[i] % n;
        arr[index] += n;
    }
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] / n > 1) {
            result.push_back(i);
        }
    }
    
    if (result.empty()) {
        result.push_back(-1);
    }
    
    return result;
    }   

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
vector<int> arr;
for(auto i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr.push_back(a);
}
vector<int> ans = duplicates(arr);
for(auto it : ans) cout << it << " ";
return 0;
}