#include <bits/stdc++.h>
using namespace std;
vector<int> AlterArray(vector<int> &arr)
{
int n = arr.size();
vector<int> ans(n,0);
  
 
  int posIndex = 0, negIndex = 1;
  for(int i = 0;i<n;i++){
      
      
      if(arr[i]<0){
          ans[negIndex] = arr[i];
          negIndex+=2;
      }
      
     else{
          ans[posIndex] = arr[i];
          posIndex+=2;
      }
  }
  
  return ans;
}
int main(int argc, char const *argv[])
{
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    vector<int> vec;
    for (auto i = 0; i < n; i++)
    {
        int a;
        cin >> a;
    }
  vector<int> ans = AlterArray(vec);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

    return 0;
}