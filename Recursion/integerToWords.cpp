#include<bits/stdc++.h>
using namespace std;
 vector<pair<int, string>> numberToWordsMap = {
        {1000000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"},
        {100, "Hundred"}, {90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"},
        {60, "Sixty"}, {50, "Fifty"}, {40, "Forty"}, {30, "Thirty"},
        {20, "Twenty"}, {19, "Nineteen"}, {18, "Eighteen"}, {17, "Seventeen"},
        {16, "Sixteen"}, {15, "Fifteen"}, {14, "Fourteen"}, {13, "Thirteen"},
        {12, "Twelve"}, {11, "Eleven"}, {10, "Ten"}, {9, "Nine"}, {8, "Eight"},
        {7, "Seven"}, {6, "Six"}, {5, "Five"}, {4, "Four"}, {3, "Three"},
        {2, "Two"}, {1, "One"}
    };
string numToWord(int num ){
  if (num == 0) {
            return "Zero";
        }

        for (auto& [value, word] : numberToWordsMap) {
            if (num >= value) {
   
                string prefix = (num >= 100) ? numToWord(num / value) + " " : "";

                string unit = word;

                string suffix = (num % value == 0) ? "" : " " + numToWord(num % value);

                return prefix + unit + suffix;
            }
        }

        return "";
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int num = 123;
cout << numToWord(num);
return 0;
}