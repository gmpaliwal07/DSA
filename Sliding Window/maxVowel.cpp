#include<bits/stdc++.h>
using namespace std;
int maxVowels(string s, int k){
    std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int maxOcc = 0, curr = 0;

    for (int i = 0; i < k; i++) {
        if (vowels.find(s[i]) != vowels.end()) {
            curr++;
        }
    }
    maxOcc = curr;
 for (int i = k; i < s.size(); i++) {
        if (vowels.find(s[i]) != vowels.end()) {
            curr++;  
        }
        if (vowels.find(s[i - k]) != vowels.end()) {
            curr--;  
        }
        maxOcc = std::max(maxOcc, curr);
    }
    return maxOcc;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt" ,"w", stdout);
#endif
string s = "abciiidef";
int k = 3;
cout << maxVowels(s,k);
return 0;
}