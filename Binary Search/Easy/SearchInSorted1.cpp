#include<bits/stdc++.h>
using namespace std;
int SearchInSorted1(vector<int> &arr, int key) {
     int low = 0;
    int high = arr.size()-1;
    while(low <= high ) {
        int mid  = (low+ high) /2;
        if(arr[mid] == key) return mid;

        if (arr[low] <= arr[mid]) {
            if(arr[low]<= key && key <= arr[mid]) {
                high = mid -1;
            }else {
                low = mid+1;
            }
        }

        else {
            if(arr[mid] <= key && key <= arr[high]) {
                low = mid +1;

            }
            else {
                high = mid -1;
            }
        }
 
    }
   return -1;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r",stdin);
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
cout << SearchInSorted1(arr, key);
return 0;
}