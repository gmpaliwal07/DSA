#include<bits/stdc++.h>
using namespace std;
string mergeAlternately(string word1, string word2) {
    string ans = "";
    int i = 0;

    while (i < word1.size() || i < word2.size()) {
        if (i < word1.size()) {
            ans.push_back(word1[i]);
        }
        if (i < word2.size()) {
            ans.push_back(word2[i]);
        }
        i++;
    }

    return ans;
}
int main(int argc, char const *argv[])
{
#ifdef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string a = "abc";   
string b = "def";
cout << mergeAlternately(a,b);
return 0;
}