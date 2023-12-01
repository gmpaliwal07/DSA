#include<bits/stdc++.h>
using namespace std;
void UnionArrayBrute(vector<int> &arr1, vector<int> &arr2) {
vector<int> unionarr;
set<int> st; 
int n1 = arr1.size();
int n2 =arr2.size();
for (auto i = 0; i < n1; i++)
{
    st.insert(arr1[i]);
}
for(auto i = 0; i < n2; i++) {
    st.insert(arr2[i]);
}
for(auto it : st) {
    unionarr.push_back(it);
}
for(auto it : unionarr) {
    cout << it << " ";
}
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_Judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
int n1, n2;
cin >> n1 >> n2;
vector<int> vec1;
for(auto i = 0; i < n1; i++) {
    int a;
    cin >> a;
    vec1.emplace_back(a);
}

vector<int> vec2;
for (auto i = 0; i < n2; i++)
{
    int z; 
    cin >> z;
    vec2.push_back(z);
}
UnionArrayBrute(vec1,vec2);

return 0;
}