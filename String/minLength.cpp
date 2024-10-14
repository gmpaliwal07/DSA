#include<bits/stdc++.h>
using namespace std;
int minLength(string s) {
    stack<char> st;

    for (char it : s) {
        if (!st.empty()) {
            if ((st.top() == 'A' && it == 'B') || (st.top() == 'C' && it == 'D')) {
                st.pop();
            } else {
                st.push(it); 
            }
        } else {
            st.push(it); 
    }

    }
    return st.size();
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s = "ABFCACDB";
cout << minLength(s);
return 0;
}