#include<bits/stdc++.h>
using namespace std;
char nonRepeatingString(string S) {
    unordered_map<char,int> charCount;

    for (char ch : S) {
        charCount[ch]++;
    }


    for (char ch : S) {
        if (charCount[ch] == 1) {
            return ch;
        }
    }

    return '\0';
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string str;
cin >> str;
    char result = nonRepeatingString(str);

    cout << result << " "; 
return 0;
}