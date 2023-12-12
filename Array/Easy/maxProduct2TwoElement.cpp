#include<bits/stdc++.h>
using namespace std;
int HighestProduct(vector<int> &arr) {
    int ans = 0;
    for (auto i = 0; i < arr.size(); i++)
    {
        for (auto j = i; j < arr.size(); j++)
        {
            ans = max(ans, (arr[i]-1)*(arr[j]-1));
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
vector<int> arr;
for(auto i=0; i< n; i++) {
    int a;
    cin >>a;
    arr.push_back(a);
}
cout << HighestProduct(arr);
return 0;
}


// has better approach with sort and second biggest element