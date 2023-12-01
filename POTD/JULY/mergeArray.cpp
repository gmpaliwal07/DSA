#include<bits/stdc++.h>
using namespace std;
void mergeArray(vector<int> arr1, vector<int> arr2) {
    int n = arr1.size();
    int m = arr2.size();
    set<int> merge;
    for(auto it : merge ) {
        merge.insert(arr1[it]);
    }
    for(auto it : merge ) {
       merge.insert(arr1[it]);
    }
    
   for(auto it : merge) {
    cout << it << " ";
   }
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdin);
#endif
int n1, n2;
cin >> n1 >> n2;
vector<int> arr1;
vector<int> arr2;
for(auto i = 0; i < n1; i++ ){
    int a;
    cin >> a;
    arr1.push_back(a);
}
for(auto j = 0; j < n2; j++ ){
    int a;
    cin >> a;
    arr2.push_back(a);
}

mergeArray(arr1,arr2);
return 0;
}