#include<bits/stdc++.h>
using namespace std;
int maxWidthRamp(vector<int> &arr) {
    int size = arr.size();
    stack<int> st;
    for (int i = 0; i < size; ++i) {

        while (!st.empty() && st.top() > nums[i]) {
            st.pop();
        }
        st.push(nums[i]);
    }

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {6,0,8,2,1,5};
return 0;
}