#include<bits/stdc++.h>
using namespace std;
 bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
    

    for (int i = 0; i < flowerbed.size(); i++) {
        if (flowerbed[i] == 0) {
       
            bool emptyPrev = (i == 0) || (flowerbed[i - 1] == 0);
            bool emptyNext = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);

            if (emptyPrev && emptyNext) {
                flowerbed[i] = 1; 
                count++;
                if (count >= n) {
                    return true; 
                }
            }
        }
    }

    return count >= n; 
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> flowerBed = {1,0,0,0,1};
int n = 1;
cout << canPlaceFlowers(flowerBed,n);
return 0;
}