#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int> &arr) {
    int max = INT_MIN;
int start = 0;
        int end = arr.size() - 1;
        
        while (start < end) {

            if (-arr[start] == arr[end]) {
                return arr[end];
            } 
            
            else if (-arr[start] > arr[end]) { 
                ++start;
            }
            
            else { 
                --end;
            }
        }
        return -1;

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r",stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
vector<int> arr;
for(auto i = 0; i < n; i++ ){
    int a;
    cin >>a;
    arr.push_back(a);
}

cout << findMax(arr);
return 0;
}