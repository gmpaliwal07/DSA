#include<bits/stdc++.h>

using namespace std;

int beautySumofSubstring(string s) {
    int totalBeauty = 0;

    for (auto i = 0; i < s.size(); ++i) {
        unordered_map<char, int> freq;

        for (auto j = i; j < s.size(); ++j) {
            freq[s[j]]++;

            int maxFreq = numeric_limits<int>::min();
            int minFreq = numeric_limits<int>::max();

            for (const auto& it : freq) {
                if (it.second > maxFreq) {
                    maxFreq = it.second;
                }
                if (it.second < minFreq) {
                    minFreq = it.second;
                }
            }

            totalBeauty += (maxFreq - minFreq);
        }
    }

    return totalBeauty;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif
string s = "aabcc";
cout << beautySumofSubstring(s);
return 0;
}