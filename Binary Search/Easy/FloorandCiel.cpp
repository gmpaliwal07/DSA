#include<bits/stdc++.h>
using namespace std;
pair<int,int> FloorAndCieling(vector<int> arr,int key)
{
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
    if(arr[start] == key) {
        int floor = arr[start];
        int ciel = arr[start];
         return make_pair(floor,ciel);
    }

    int floor = arr[start];
    int ciel = arr[start+1];
    

    return make_pair(floor,ciel);
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int n;
int key;
cin >> n >> key;
vector<int> arr;
for (auto i = 0; i < n; i++)
{
    int a;
     cin >> a;
     arr.push_back(a);
}

  pair<int, int> result = FloorAndCieling(arr, key);

  cout << result.first << " " << result.second;
return 0;
}