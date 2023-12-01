#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> arr;
    for (auto i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.emplace_back(a);
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    bubble_sort(arr, n);
    return 0;
}