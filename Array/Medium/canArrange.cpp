#include<bits/stdc++.h>
using namespace std;
bool canArrange(vector<int> &arr, int k) {
    int cnt = 0;
    int i = 0, j = arr.size()-1;
    while(i < j) 
    {
        if(arr[i]+arr[j] == k){
            cnt++;
        } 
        j--;
        i++;
    }
    if(cnt > 0) return true;
    else return false;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w",stdout);
#endif
vector<int> arr = {1,2,3,4,5,10,6,7,8,9};
cout << canArrange(arr, 5);

return 0;
}