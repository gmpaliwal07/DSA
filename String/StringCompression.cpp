#include<bits/stdc++.h>
using namespace std;
 int compress(vector<char>& chars) {

    int i = 0; 
    int ansIndex = 0;
    int n = chars.size();
    while(i < n) {
        int j  = i+1;
        while( j< n && chars[i] ==chars[j]) {
            j++;
        }

        // when the char is not equal
        chars[ansIndex++] = chars[i];
        int count = j-i;
        if(count > 1) {
            string cnt = to_string(count);
            for(auto it : cnt) {
                chars[ansIndex++] = cnt;
            }

        }
        i = j;
    }
return ansIndex;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<char> chars = {"a","a","b","b","c","c","c"}
return 0;
}