#include<bits/stdc++.h>
using namespace std;
void mergeTwoSorted(vector<int> &arr1, vector<int> &arr2, int n , int m) {

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr1 = {1,2,3,0,0,0};
vector<int> arr2 = {2,5,6};
int n, m;
cin >> n >> m;
mergeTwoSorted(arr1, arr2, n, m);
return 0;
}