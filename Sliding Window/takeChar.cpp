#include<bits/stdc++.h>
using namespace std;
 int takeCharacters(string s, int k) {
       vector<int> count(3,0);
        int n = s.length();
        for(auto c : s) {
            count[c-'a']++;
        }
        for(auto i = 0; i < 3; i++) {
            if(count[i] < k) return -1;
        }
        vector<int> window(3,0);
        int l  =0 ,maxWindow = 0;
          for (int r = 0; r < n; r++) {
            window[s[r] - 'a']++;

            // Shrink window 
            while (l <= r &&
                   (count[0] - window[0] < k || count[1] - window[1] < k ||
                    count[2] - window[2] < k)) {
                window[s[l] - 'a']--;
                l++;
            }

            maxWindow = max(maxWindow, r - l + 1);
        }
        return n- maxWindow;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string  s = "aabaaaacaabc";
int k = 2;
cout << takeCharacters(s,k);
return 0;
}