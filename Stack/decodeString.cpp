#include<bits/stdc++.h>
using namespace std;
string decodeString(string s) {
    stack<char> st;
    string currStr;
    int num = 0;
    for(auto it : s) {
        if (isdigit(c)) {
            currNum = currNum * 10 + (c - '0');
        }
        else if(it == '['){
            st.push(currStr);
            st.push(to_string(num))
        }
    } 
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s = "3[a]2[bc]";
return 0;
}