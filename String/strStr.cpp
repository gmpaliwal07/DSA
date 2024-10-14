#include<bits/stdc++.h>
using namespace std;
int strStr(const string haystack , const  string needle) {
   int haystackLen = haystack.size();
    int needleLen = needle.size();

    if (needleLen == 0) return -1;  
    if (haystackLen < needleLen) return -1;  
     // Sliding window 
    for (int i = 0; i <= haystackLen - needleLen; i++) {
        int j = 0;
        while (j < needleLen && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == needleLen) {
            return i;  
        }
    }
    return -1;

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s1 = "strstr";
string s2 = "str";
cout << strStr(s1,s2);

return 0;
}