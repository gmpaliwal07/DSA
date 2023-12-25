#include<bits/stdc++.h>
using namespace std;

string reverseString(string str) {
    stack<string> st;
    string s = "";
    
    for (auto it = 0; it < str.length(); it++) {
        if (str[it] == ' ') {
            st.push(s);
            s = "";
        } else {
            s += str[it];
        }
    }
    
    st.push(s); 
    
    string ans = "";
    
    while (st.size() != 1) {
        ans += st.top() + " ";
        st.pop();
    }
    
    ans += st.top();
    
    return ans;
}

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string str;
    getline(cin, str);  // to take long inputs with space
    cout <<  "Before Reverse :" << str << endl;
    cout << "After reverse :" << reverseString(str) ;
return 0;
}