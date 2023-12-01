#include <bits/stdc++.h>
using namespace std;
int TwoSum(vector<int> &vec, int key)
{
    vector<int> ans;
    int n = vec.size();
    for (auto i = 0; i < n; i++)
    {
        for (auto j = i; j < n; j++)
        {
            if (vec[i] + vec[j] == key)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, key;
    cin >> n >> key;
    vector<int> arr;
    for (auto i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    vector<int> result = TwoSum(arr, key);

    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}