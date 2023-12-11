#include<bits/stdc++.h>
using namespace std;
int occurence(vector<int> &arr) {
    int quarter = arr.size() /4;
    for (auto i = 0; i < arr.size() - quarter; i++)
    {
        if(arr[i] == arr[i+quarter]) return arr[i];
        
    }
    return -1;
    
}
int main(int argc, char const *argv[])
{
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
int n;
cin >> n;
vector<int> arr;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >>a;
    arr.push_back(a);
}
cout << occurence(arr);
return 0;
}