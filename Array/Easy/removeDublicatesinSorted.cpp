#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int> &arr) {
    int i= 0;
    for (auto j = 1; j < arr.size(); j++)
    {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
int main(int argc, char const *argv[])
{
    #ifndef Online_Judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
vector<int> arr;
int n;
cin >> n;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}

 
  int k = removeduplicates(arr);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
return 0;
}