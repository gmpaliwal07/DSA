#include<bits/stdc++.h>
using namespace std;
int missingElement(vector<int> &arr) {
    int n = arr.size();
    vector<int> value;
    // sort(arr.begin(), arr.end());
    // int j = 1;
    // for (auto i = 0; i < n; i++)
    // {
    //     if(arr[i] != j) {
    //         value.emplace_back(j);
    //     }
    //         j++;
    // };
    
  
for (auto i = 1; i <= n; i++) {
        bool found = false;
        for (auto j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            return i;
        }
    }

    // Handle the case where no element is missing
    return -1;



    // for (auto i = 0; i < value.size(); i++)
    // {
    //     cout << value[i] << " ";
    // }
    
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
    cin >>a;
    vec.emplace_back(a);
}

cout << missingElement(vec);
// for(auto i = 0; i < ans; i++ ){
//     cout << vec[i];
// }

return 0;
}