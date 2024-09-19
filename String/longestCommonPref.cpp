#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &arr) {
     if (arr.empty()) return ""; 
    
    string prefix = arr[0];  
    
    for (int i = 1; i < arr.size(); i++) {
        int j = 0;
        while (j < prefix.size() && j < arr[i].size() && prefix[j] == arr[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j);
        if (prefix.empty()) return "";
    }
    
    return prefix;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<string> arr = {"flower", "flow", "flight"};
cout << longestCommonPrefix(arr);
return 0;
}