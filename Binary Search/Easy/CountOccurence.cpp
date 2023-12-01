#include <bits/stdc++.h>
using namespace std;

int binarySearchFirstOccurrence(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return result;
}

int binarySearchLastOccurrence(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return result;
}

int NumberOfOccurence(vector<int> &arr, int n, int x)
{
    int first = binarySearchFirstOccurrence(arr, n, x);

    if (first == -1)
    {
        // If x is not present in the array, return 0
        return 0;
    }

    int last = binarySearchLastOccurrence(arr, n, x);

    return last - first + 1;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr;
    int n, key;
    cin >> n >> key;
    for (auto i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << NumberOfOccurence(arr, n, key);
    return 0;
}