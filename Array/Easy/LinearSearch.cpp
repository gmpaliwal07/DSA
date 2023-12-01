#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &arr, int k) {
    int n = arr.size();
    for(auto i = 0; i < n; i++) {
        if(arr[i] == k) {
            return i;
        }
    }
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr;
int k;
cin >> k;
int n;
cin >> n;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >>a;
    arr.push_back(a);
}

cout << linearSearch(arr,k);
return 0;
}