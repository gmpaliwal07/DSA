#include<bits/stdc++.h>
using namespace std;
void Cyclicallyrotate(vector<int> &arr) {
    int n = arr.size();
    if (n <= 1) return;
    int last_element = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = last_element;
    for (auto it : arr)
    {
        cout << it << " ";
    }
}

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
vector<int> arr;

int n; 
cin >> n;

for(auto i = 0; i < n ; i++) {
int a;
cin >> a;
arr.push_back(a);
}
Cyclicallyrotate(arr);


return 0;
}