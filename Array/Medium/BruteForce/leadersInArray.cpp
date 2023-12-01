#include<bits/stdc++.h>
using namespace std;
void LeadersArray(vector<int> arr) {
    int n  = arr.size();
    vector<int> ans;
   for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            ans.push_back(arr[i]);
        }
    }
    for(auto it : ans) {
        cout << it << " ";
    }
}


// for the better solution we use backtraversal of the array 
 
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt" , "w", stdout);
#endif
int n ;
cin >> n;
vector<int> arr;
for (auto i = 0; i < n; i++)
{
    int a;
    cin>> a;
    arr.push_back(a);
}

LeadersArray(arr);


return 0;
}