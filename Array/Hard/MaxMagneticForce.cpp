#include<bits/stdc++.h>
using namespace std;
bool isAllocationPos(int mid, vector<int> &position, int m ) {
    int ballPlaced  = 1;
    int lastPosition = position[0];
    for(auto i = 1; i< position.size(); i++){
        if(position[i]-lastPosition >= mid) {
            ballPlaced++;
            lastPosition = position[i];
        }
        if(ballPlaced >= m) return true;
    }
    return false;
}
int maxMagneticForce(vector<int> &position, int m) {
    sort(position.begin(), position.end());
    int n = position.size();
    int ans = 0;
    if(m == 2) {
        ans =  position[n-1]-position[0];
    }

    int low = 0;
    int high = position[n-1] - position[0];
    while (low <= high)
    {
        int mid = (low+high)/2;
        if(isAllocationPos(mid,position, m)){
            ans = mid;
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    
    return ans;
} 
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> position = {1,2,3,4,7};
int  m = 3;
cout << maxMagneticForce(position,m);
return 0;
}