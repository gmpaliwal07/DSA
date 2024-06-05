#include<bits/stdc++.h>
using namespace std;
void next_permutation(vector<int> &arr) {
    int index = -1;

    for(auto i = arr.size()-2; i>=0 ; i--) {
        if(arr[i] < arr[i+1]) {
            index = i;
            break;
        }
    }
    if(index == -1) {
        reverse(arr.begin(), arr.end());
    }
    for(auto i = arr.size()-1; i>index; i--) {
        if(arr[i] > arr[index]) {
            swap(arr[i], arr[index]);
        }
    }
    reverse(arr.begin()+index+1, arr.end());
}
int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr;
int n ;
cin >> n;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}


return 0;
}