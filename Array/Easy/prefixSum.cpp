#include<bits/stdc++.h>
using namespace std;
vector<int> prefixSumArray(vector<int> &arr) {
    vector<int> prefix(arr.size());
        prefix[0] = arr[0];
        for(auto i = 0; i < arr.size(); i++ ){
            prefix[i] = prefix[i-1] + arr[i];
        }

        return prefix;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "w", stdout);
freopen("output.txt", "w",stdout);
#endif
vector<int> arr ={2,3,41,-2};
    std::vector<int> prefix = prefixSumArray(arr);
for(auto it : prefix) {
    cout << it << " ";
}
return 0;
}