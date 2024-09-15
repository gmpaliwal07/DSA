#include<bits/stdc++.h>
using namespace std;
int MaxCandies(vector<int> &arr ){
    int sum =1;
    int i = 1;
    while(i <arr.size()){
        if(arr[i] == arr[i-1]) {
            sum+=1;
            i++;
            continue;
        }
        int peak = 1;
        while(i < arr.size() && arr[i] > arr[i-1]) {
            peak+=1;
            sum+=peak;
            i++;
        }
        int down = 1;
        while(i < arr.size() && arr[i] < arr[i-1]) {
            down+=1;
            sum+=down;
            i++;
        }
        if(down < peak) sum+=(peak-down);
    }
    return sum;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> ratings = {1,0,2};
cout << MaxCandies(ratings);
return 0;
}