#include<bits/stdc++.h>
using namespace std;

bool CheckIfArraySorted(vector<int> &arr){
   for (int i = 0; i < arr.size(); i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[j] < arr[i])
        return false;
    }
  }

    return true;
    
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
vector<int> vec;
    int n;
    cin >> n;
for (auto i = 0; i < n; i++)
{
   int a;
   cin >> a;
   vec.emplace_back(a);
}

cout << CheckIfArraySorted(vec);
return 0;
}