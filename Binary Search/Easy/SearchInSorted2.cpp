#include<bits/stdc++.h>
using namespace std;
bool searchInARotatedSortedArrayII(vector<int>&arr, int key) {
         int low = 0; 
    int high = arr.size() -1;
  while(low <= high ) {
        int mid  = (low+ high) /2;
        if(arr[mid] == key) return true;
 if(arr[low] == arr[mid] && arr[mid] == arr[high] ) {
            low++;
            high--;
            continue;
        }
        if (arr[low] <= arr[mid ]) {
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
   return false;
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
cout << searchInARotatedSortedArrayII(arr, key);
return 0;
}