#include<bits/stdc++.h>
using namespace std;
void rightRotate(vector<int> &arr, int k, int n) 
{ 
      if (k == 0) {
        return;
    }
    k = k % n;
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = n-k-1; i >= 0; i--)
    {
        arr[i+k] = arr[i];
    }
    for(int i = n-k; i < n; i++) {
        temp[i-(n-k)] = arr[i];
    }
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
vector<int> arr;
int index ;
cin >> index;
int n; 
cin >> n;

for(auto i = 0; i < n ; i++) {
int a;
cin >> a;
arr.push_back(a);
}

rightRotate(arr,index,n);
for(auto it : arr) {
   cout << it  <<  " ";
}
return 0;
}