#include<bits/stdc++.h>
using namespace std;
void push(int a, vector<int> &arr) {
    cin >> a;
    arr.push_back(a);
}
void pop(vector<int> &arr) {
    arr.erase(arr.end()-1);
}
void top(vector<int> &arr) {
   int a = arr[0];
   cout << a;
}
int main(int argc, char const *argv[]){   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr;
    push(7,arr);
    push(8,arr);
    push(9,arr);
    push(1,arr);
    push(5,arr);
    pop(arr);
    
    top(arr);
    cout << endl;
    for(auto it : arr) cout << it << " ";
return 0;
}