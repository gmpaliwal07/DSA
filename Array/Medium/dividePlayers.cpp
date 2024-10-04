#include<bits/stdc++.h>
using namespace std;
long long dividePlayers(vector<int> &skills) {
    sort(skills.begin(), skills.end());
        
        int n = skills.size();
        long long sum = 0;
        
        int targetSum = skills[0] + skills[n - 1];
        
        int i = 0, j = n - 1;
        while (i < j) {
            if (skills[i] + skills[j] != targetSum) {
                return -1;
            }
            sum += (long long)skills[i] * skills[j];
            i++;
            j--;
        }
        
        return sum;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" , "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr =  {3,2,5,1,3,4};
cout << dividePlayers(arr);
return 0;
}