#include<bits/stdc++.h>
using namespace std;
void GenerateSubArray(vector<int> arr) {
    for(auto i = 0; i < arr.size(); i++) {
        for(auto j = i; j < arr.size(); j++) {
             for (auto k = i; k <= j; ++k) { 
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif
vector<int> arr;
int n;
cin >> n;
for(auto i = 0; i < n; i++){
    int a;
    cin >>a;
    arr.push_back(a);
}
GenerateSubArray(arr);

return 0;
}