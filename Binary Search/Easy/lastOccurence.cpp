#include<bits/stdc++.h>

using namespace std;
//we implement via lowerbound and upper bound Approach
int LowerBound(vector<int> &arr, int key) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2; 

        if (arr[mid] >= key) {
            end = mid - 1; 
        } else {
            start = mid + 1;  
        }
    }

    return start;  
        
}
int  UpperBound(vector<int> &arr, int key) {
    int start  = 0;
    int end = arr.size()-1;
    while (start <= end) 
    {
         int mid = start + (end - start) / 2;
         if(arr[mid] <= key) {
            start = mid +1;
         }else {
            end = mid -1;
         }
    }
    return start;
}
pair<int,int> firstAndLastOccurence(vector<int> &arr,int key) {
    int first = -1;
    int last =-1;
    int n = arr.size();
    int lb  = LowerBound(arr,key);

    if(lb == n || arr[lb] != key) return  {-1,-1};
    return {lb, UpperBound(arr,key) - 1};
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r",stdin);
freopen("output.txt", "w",stdout);
#endif
int n,  key;
cin >> n >> key;
vector<int> arr;
for(auto i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr.push_back(a);
}
pair<int, int> ans = firstAndLastOccurence(arr,key);
cout << ans.first << " " << ans.second;
return 0;
}