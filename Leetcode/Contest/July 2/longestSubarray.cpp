#include <bits/stdc++.h>
using namespace std;
int longestAlternatingSubarray(vector<int> &nums, int threshold)
{
  
}
int main(int argc, char const *argv[])
{

  int n;
  cin >> n;
  vector<int> arr;
  int thres;
  cin >> thres;
  for (auto i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  cout << longestAlternatingSubarray(arr, thres);
  return 0;
}