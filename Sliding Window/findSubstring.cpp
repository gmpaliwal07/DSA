#include<bits/stdc++.h>
using namespace std;


int main() {
    std::string s = "foobarfoobar";
    std::vector<std::string> words = {"foo", "bar"};
    std::vector<int> ans;

    int wordLength = words[0].length(); // Assuming all words are of the same length
    int totalLength = wordLength * words.size();
    for (int i = 0; i <= s.length() - totalLength; i++) {
        std::string substring = s.substr(i, totalLength);
        std::vector<std::string> seen;
        bool isValid = true;

        for (int j = 0; j < totalLength; j += wordLength) {
            std::string word = substring.substr(j, wordLength);
            if (std::find(words.begin(), words.end(), word) != words.end() && 
                std::count(seen.begin(), seen.end(), word) < 
                std::count(words.begin(), words.end(), word)) {
                seen.push_back(word);
            } else {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            ans.push_back(i);
        }
    }

    for (int index : ans) {
        std::cout << index << " ";
    }

    return 0;
}

