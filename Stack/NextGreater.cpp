#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &num1, vector<int> &num2){
   stack<int> st;  
    unordered_map<int, int> greaterMap;  
    vector<int> ans(num1.size());  

    for (int i = num2.size() - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= num2[i]) {
            st.pop();
        }
        greaterMap[num2[i]] = st.empty() ? -1 : st.top();
        st.push(num2[i]);  
    }

    for (int i = 0; i < num1.size(); ++i) {
        ans[i] = greaterMap[num1[i]];
    }

    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 
vector<int> num1 = {4,1,2};
vector<int> num2 = {1,3,4,2};
vector<int> ans = nextGreaterElement(num1,num2);
for(auto it : ans ){
    cout << it << " ";
} 
return 0;
}