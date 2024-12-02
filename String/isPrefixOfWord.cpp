#include<bits/stdc++.h>
using namespace std;
 int isPrefixOfWord(string sentence, string searchWord) {
         int word = 1;  
    int i = 0;     

    while (i < sentence.size()) {
        if (sentence.substr(i, searchWord.size()) == searchWord) {
            return word; 
        }

        while (i < sentence.size() && sentence[i] != ' ') i++;
        while (i < sentence.size() && sentence[i] == ' ') i++;
        word++; 
    }

    return -1;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s = "i love car";
string searchWord = "car";
cout << isPrefixOfWord(s, searchWord);
return 0;
}