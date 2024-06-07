#include<bits/stdc++.h>
using namespace std;
  string shortestRoot(string word, unordered_set<string> dictSet) {
        for (int i = 1; i <= word.length(); i++) {
            string root = word.substr(0, i);
            if (dictSet.contains(root)) {
                return root;
            }
        }
        return word;
    }
    string replaceWords(vector<string> &dictionary, string sentence) {
           istringstream sStream(sentence);
        unordered_set<string> dictSet(dictionary.begin(), dictionary.end());

        string word;
        string newSentence;
        while (getline(sStream, word, ' ')) {
            newSentence += shortestRoot(word, dictSet) + " ";
        }

        newSentence.pop_back();  
        return newSentence;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string sent = "the cattle was a rattled by the battery";
vector<string> dict =  {"cat", "rat", "bat"};
string s =  replaceWords(dict,sent);
for(auto it : s) {
    cout << it << " ";
}
return 0;
}