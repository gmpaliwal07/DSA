#include<bits/stdc++.h>
using namespace std;
int minimumBalanced(strig s )
{
       int n = s.length();
        vector<int> count_a(n, 0);
        vector<int> count_b(n, 0);
        int b_count = 0;

        for (int i = 0; i < n; i++) {
            count_b[i] = b_count;
            if (s[i] == 'b') b_count++;
        }

        int a_count = 0;

        for (int i = n - 1; i >= 0; i--) {
            count_a[i] = a_count;
            if (s[i] == 'a') a_count++;
        }

        int min_deletions = n;
        for (int i = 0; i < n; i++) {
            min_deletions = min(min_deletions, count_a[i] + count_b[i]);
        }

        return min_deletions;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r", stdin);
freopen("output.txt" , "w", stdout);
#endif
string s = "aababbab"
return 0;
}