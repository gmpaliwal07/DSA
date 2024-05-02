#include<bits/stdc++.h>
using namespace std;
string reversePrefix(string &word, char ch) {
        auto pos = word.find(ch);
        if (pos != -1) {
            std::reverse(word.begin(), word.begin() + pos + 1);
        }
        return word;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s;
char ch;
cin >> s >> ch;
cout << reversePrefix(s,ch);
return 0;
}