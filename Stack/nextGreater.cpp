#include<bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int> &arr) {
    vector<int> NGE(arr.size()); 
    stack<int> st;

    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (st.empty()) {
            NGE[i] = -1;
        } else {
            NGE[i] = st.top();
        }
        st.push(arr[i]);
    }

    return NGE;

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt","w", stdout);
#endif
vector<int> arr = {6,0,8,1,3};
vector<int> ans = NGE(arr);
for(auto it : ans) {
    cout << it << " ";
}
return 0;
}