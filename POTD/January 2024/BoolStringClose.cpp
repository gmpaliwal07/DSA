#include <bits/stdc++.h>
using namespace std;
bool closeStrings(string word1, string word2)
{
   if(word1.size() != word2.size()) return false;
        
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int index = 0; index < word1.size(); index++)
        {
            freq1[word1[index]-'a']++;
            freq2[word2[index]-'a']++;
        }
        

        for(int current = 0; current < 26; current++)
        {
            if((freq1[current] == 0 && freq2[current] != 0) || 
              (freq1[current] != 0 && freq2[current] == 0))
                return  false;
        }
        
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
      
        for(int current = 0; current < 26; current++)
        {
            if(freq1[current] != freq2[current])
                return false;
        }

        return true;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string word1, word2;
    cin >> word1 >> word2;
    int res = closeStrings(word1, word2);
    (res == 1) ? cout << "true" : cout << "false";
    return 0;
}