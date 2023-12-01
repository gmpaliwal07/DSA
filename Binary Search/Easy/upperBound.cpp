#include<bits/stdc++.h>
using namespace std;
int  UpperBound(vector<int> &arr, int key) {
    int start  = 0;
    int end = arr.size()-1;
    while (start <= end) 
    {
         int mid = start + (end - start) / 2;
         if(arr[mid] <= key) {
            start = mid +1;
         }else {
            end = mid -1;
         }
    }
    return start;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    vector<int> arr;
    for (auto i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int key;
    cin >> key;
    cout << UpperBound(arr, key);
return 0;
}