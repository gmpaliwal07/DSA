#include<bits/stdc++.h>
using namespace std;
int MajorityElement(vector<int> &arr)  {
    int n = arr.size();
    map<int, int> mpp;
    for (auto i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it : mpp ){
        if(it.second > n/2) {
            return it.first;
        }
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
for(auto i = 0; i < n; i++) {
    int a; 
    cin >> a;
    arr.push_back(a);
}

cout << MajorityElement(arr);
return 0;
}


// for the optimal solution we use moores algo 