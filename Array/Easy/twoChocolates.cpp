#include<bits/stdc++.h>
using namespace std;
int buyChoco(vector<int> &arr, int money) {
    int n = arr.size();
    int sum = 0;
    sort(arr.begin(), arr.end());
    for(auto i = 0; i< n; i++) {
        sum+=arr[i];
        if(!(sum >= money)) {
            return 0;
        }
    }
    return money;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("ouput.txt", "w", stdout);
#endif
int n, money;
cin >>n >> money;
vector<int> arr;
for(auto i = 0; i < n; i++){ 
    int a;
    cin >>a;
    arr.push_back(a);
} 
cout << buyChoco(arr, money);
return 0;
}