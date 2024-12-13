#include <bits/stdc++.h>
using namespace std;
int numberOfSubarrays(vector<int> &nums, int k)
{
    int ans = 0;
    int cnt = 0;
    for (auto i = 0; i < nums.size(); i++)
    {
        for (auto j = i; j < nums.size(); j++)
        {
            if (arr[i] % 2 != 0)
            {
                cnt++;
                if (cnt == 3)
                {
                    ans++;
                }
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {1, 1, 2, 1, 1};
    int k = 3;
    return 0;
}