#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr)
{
    int n = arr.size();
    set<int> set;
    for (int i = 0; i < n; i++)
    {
        set.insert(arr[i]);
    }
    int k = set.size();

    return k;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr;
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << removeDuplicates(arr);
    return 0;
}