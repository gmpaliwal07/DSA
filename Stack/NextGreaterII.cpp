#include<bits/stdc++.h>
using namespace std;
vector<int> NGEII(vector<int> &arr) {
     vector<int> NGE(arr.size());
    stack<int> st;

    for (int i = (2 * arr.size()) - 1; i >= 0; i--) {

        while (!st.empty() && st.top() <= arr[i % arr.size()]) {
            st.pop();
        }
        
        if (i < arr.size()) {
            NGE[i] = st.empty() ? -1 : st.top();
        }
 
        st.push(arr[i % arr.size()]);
    }
    
    return NGE;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {2,10,12,1,11};
vector<int> NGE = NGEII(arr);
for(auto it : NGE) 
{
    cout << it << " ";
}
return 0;
}