#include <bits/stdc++.h>
using namespace std;
string IntToRoman(int num)
{
     vector<pair<int, string>> values = {
        {1000, "M"}, {500, "D"}, 
        {100, "C"},
        {10, "X"}, {5, "V"}, {1, "I"}
    };
    
    string roman = "";
    for (const auto &value : values) {
        while (num >= value.first) {
            roman += value.second;
            num -= value.first;
        }
    }
    return roman;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int num = 234;

    return 0;
}