#include<bits/stdc++.h>
using namespace std;
int LongestSequenceArray(vector<int> &arr) {
     if(arr.size() == 0 ){
            return 0;
        }
        sort(arr.begin(),arr.end());
        int ans = 1;
        int prev = arr[0];
        int cur = 1;
        
        for(int i = 1;i < arr.size();i++){
            if(arr[i] == prev+1){
                cur++;
            }
            else if(arr[i] != prev){
                cur = 1;
            }
            prev = arr[i];
            ans = max(ans, cur);
        }
        return ans;
    }


int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin );
freopen("output.txt", "w", stdout); 
#endif
int n ;
cin  >> n;
vector<int> arr;
for(auto i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr.push_back(a);
}

cout << LongestSequenceArray(arr);
return 0;
}