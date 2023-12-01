#include<bits/stdc++.h>
using namespace std;
int appearOnes(vector<int> &arr){
    int n = arr.size();
    int max_elem = arr[0];
    
    for(auto i = 0; i < n; i++){
        max_elem = max(max_elem, arr[i]);

    }

    //declarehashmp 
    vector<int> hash(max_elem +1, 0);
    for (auto i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    
    for(int i = 0; i <n; i++ ) {
        if(hash[arr[i]] ==1) {
            return arr[i];
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
vector<int> vec;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    vec.push_back(a);
}
cout << appearOnes(vec);
return 0;
}