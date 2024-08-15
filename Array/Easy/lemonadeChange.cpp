#include<bits/stdc++.h>
using namespace std;
int lemonadeChange(vector<int> &bills) {
    int five = 0, ten = 0;
    for (int it : bills) {
        if (it == 5) {
            five++;
        } else if (it == 10) {
            if (five == 0) return false;
            five--;
            ten++;
        } else {
            if (ten > 0 && five > 0) {
                ten--;
                five--;
            } else if (five >= 3) {
                five -= 3;
            } else {
                return false;
            }
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> bills = {5,5,5,10,20};
cout<< lemonadeChange(bills);
return 0;
}