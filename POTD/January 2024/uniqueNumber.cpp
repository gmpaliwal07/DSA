#include<bits/stdc++.h>
using namespace std;
  bool uniqueOccurrences(vector<int>& arr) {
       std::unordered_map<int, int> frequencyMap;
    for (int num : arr) {
        frequencyMap[num]++;
    }
    std::unordered_set<int> uniqueFrequencies;

    for (const auto& pair : frequencyMap) {
        if (uniqueFrequencies.find(pair.second) != uniqueFrequencies.end() /*this condition iterate and check whether the element is present or not */ ) { 
            return false;
        }
        uniqueFrequencies.insert(pair.second);
    }

    return true; 
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr;
int n;
cin>> n;

for(auto it = 0; it < n; it++){
    cin >> it ;
}

int res = uniqueOccurrences(arr);
(res == 0) ? cout << "false"  : cout << "true";
return 0;
}