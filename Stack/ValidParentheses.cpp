#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
     stack<char> st;  
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } 
        else {
            if (st.empty()) return false;  

            char ch = st.top();  
            st.pop();  

            if (s[i] == ')' && ch != '(') return false;
            if (s[i] == '}' && ch != '{') return false;
            if (s[i] == ']' && ch != '[') return false;
        }
    }
    return st.empty();
    }
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s = "{}[]()";
    cout << isValid(s) ? "true" : "false";
return 0;
}