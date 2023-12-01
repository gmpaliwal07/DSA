#include<bits/stdc++.h>
using namespace std;
int missingElement(vector<int> &arr) {
    int n = arr.size() + 1;  // One element is missing
    
    // Calculate the sum of integers from 1 to n
    int sum1 = (n * (n + 1)) / 2;
    
    // Calculate the sum of elements in arr
    int sum2 = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum2 += arr[i];
    }
    
    // Return the missing element
    int res = sum1 -sum2;
    return res;
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
return 0;
}