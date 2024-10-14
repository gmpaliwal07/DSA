#include<bits/stdc++.h>
using namespace std;
int minSwaps(string s) {
   stack<char> st;
    int swaps = 0;

    for (char c : s) {
        if (c == '[') {
            st.push(c);  
        } else if (c == ']') {
            if (!st.empty() && st.top() == '[') {
                st.pop();  
            } else {
                swaps++; 
            }
        }
    }

    return (swaps + 1) / 2;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s = "][][";
cout << minSwaps(s);
return 0;
}