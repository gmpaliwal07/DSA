#include<bits/stdc++.h>
using namespace std;

int missingNumberPositive(vector<int> &arr) {
int n = arr.size();
     int ptr = 0;
 

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            ptr = 1;
            break;
        }
    }
 
    if (ptr == 0)
        return 1;
 
   
    for (int i = 0; i < n; i++)
        if (arr[i] <= 0 || arr[i] > n)
            arr[i] = 1;
 

    for (int i = 0; i < n; i++)
        arr[(arr[i] - 1) % n] += n;
 

    for (int i = 0; i < n; i++)
        if (arr[i] <= n)
            return i + 1;
 

    return n + 1;
    

  

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE 
freopen("input.txt" ,"r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
vector<int> arr;
for(auto i = 0; i < n ; i++) {
    int a;
    cin >> a;
    arr.push_back(a);
}

cout << missingNumberPositive(arr);
return 0;
}