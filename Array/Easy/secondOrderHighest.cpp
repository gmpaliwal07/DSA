#include<bits/stdc++.h>
using namespace std;
int secondLargestElement(vector<int> &arr ) {
     int n = arr.size();
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;  
}
int secondSmallestElement(vector<int> &arr) {
   int n = arr.size();
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
vector<int> secondOrderElement(vector<int> &arr) {
   vector<int> ans;
    int ans1 = secondSmallestElement(arr);
    int ans2 = secondLargestElement(arr);
    ans.push_back(ans1);
    ans.push_back(ans2);
    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> vec;
int n;
cin >> n;
for (auto  i = 0; i < n; i++)
{
    int a;
    cin >> a;
    vec.push_back(a);
}
vector<int> ans   = secondOrderElement(vec);
for(auto it : ans) {
    cout << it << endl;
}
return 0;
}