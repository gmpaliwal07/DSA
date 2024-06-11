#include <bits/stdc++.h>
using namespace std;
int convertToInteger(string s)
{
    unordered_map<char, int> mpp = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int result = 0;
        for (int i = 0; i < s.size(); ++i) {
        if (i < s.size() - 1 && mpp[s[i]] < mpp[s[i + 1]]) {
            result -= mpp[s[i]];
        } else {
            result += mpp[s[i]];
        }
    }
        return result;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string roman = "IIIMXWDD";
    cout << convertToInteger(roman);
    return 0;
}