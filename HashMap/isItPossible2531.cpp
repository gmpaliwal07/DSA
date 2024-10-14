#include<bits/stdc++.h>
using namespace std;
bool isItPossible(string &word1, string &word2){

        unordered_map<char, int> freq1, freq2;

        for (char ch : word1) {
            freq1[ch]++;
        }
        for (char ch : word2) {
            freq2[ch]++;
        }
        
        unordered_set<char> distinct1(word1.begin(), word1.end());
        unordered_set<char> distinct2(word2.begin(), word2.end());
        
        int distinctCount1 = distinct1.size();
        int distinctCount2 = distinct2.size();
        for (char c1 = 'a'; c1 <= 'z'; ++c1) {
            for (char c2 = 'a'; c2 <= 'z'; ++c2) {
                if (freq1[c1] > 0 && freq2[c2] > 0) {

                    int newDistinctCount1 = distinctCount1;
                    int newDistinctCount2 = distinctCount2;
                    
                    // Remove c1 from word1's distinct characters if we swap it
                    if (freq1[c1] == 1) newDistinctCount1--;
                    
                    // Add c2 to word1's distinct characters if we swap it
                    if (freq1[c2] == 0) newDistinctCount1++;
                    
                    // Remove c2 from word2's distinct characters if we swap it
                    if (freq2[c2] == 1) newDistinctCount2--;
                    
                    // Add c1 to word2's distinct characters if we swap it
                    if (freq2[c1] == 0) newDistinctCount2++;
                    
                    // Check if after the swap, both words have the same distinct character count
                    if (newDistinctCount1 == newDistinctCount2) {
                        return true;
                    }
                }
            }
        }
        
        return false;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string word1= "abcc";
string word2 = "aab";

return 0;
}