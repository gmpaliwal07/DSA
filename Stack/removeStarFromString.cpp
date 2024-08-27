#include<bits/stdc++.h>
using namespace std;
string removeStar(string s){
   stack<char> st;
    for (auto it : s) {
        if (it == '*') {
            if (!st.empty()) st.pop();  
        } else {
            st.push(it);
        }
    }
    
    // constructing resulting string 
    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    
    // Since stacks are LIFO, reverse
    reverse(result.begin(), result.end());
    return result;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s = "leet**co*de";
cout << removeStar(s);
return 0;
}