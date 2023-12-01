#include<bits/stdc++.h>
using namespace std;
int MajorityElement(vector<int> &arr) {
    int n = arr.size();
    for (auto i = 0; i < n; i++)
    {
        int cnt = 0;
        for (auto j = 0; j < n; j++)
        {
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        
        if(cnt > n/2) return arr[i];
    }
    return -1;
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
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}

cout << MajorityElement(arr);
return 0;
}


//to better solution  we solve this with Map 
