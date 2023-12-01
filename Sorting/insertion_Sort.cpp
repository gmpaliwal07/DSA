#include <bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> arr, int n)
{

    for (int i = 0; i <= n - 1; i++)
    {

        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
}
int main(int argc, char const *argv[])
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
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
    insertion_sort(arr, n);
    return 0;
}