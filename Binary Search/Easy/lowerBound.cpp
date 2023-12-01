#include<bits/stdc++.h>

using namespace std;

int LowerBound(vector<int> &arr, int key) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;  // Calculate mid within the loop

        if (arr[mid] >= key) {
            end = mid - 1; 
        } else {
            start = mid + 1;  
        }
    }

    return start;  
        
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, key;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)

    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cin >> key;
   cout << LowerBound(arr, key);


   
return 0;
}