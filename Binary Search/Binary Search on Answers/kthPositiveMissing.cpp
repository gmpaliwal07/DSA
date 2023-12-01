#include<bits/stdc++.h>
using namespace std;
int kthPositiveMissing(vector<int> &arr, int k) {
    int n = arr.size();
    for (auto  i = 0; i < n-1; i++)
    {
        if(arr[i] <= k) k++;
        else break;
    }
    return k;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("intput.txt", "r",stdin);
freopen("output.txt", "w", stdout);
#endif
int  n, k;
cin >> n >> k;
vector<int> arr;
for (auto  i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}
cout << kthPositiveMissing(arr, k);
return 0;
}