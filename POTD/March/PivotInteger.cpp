#include<bits/stdc++.h>
using namespace std;

    int pivotInteger(int n) {
         int leftValue = 1;
        int rightValue = n;
        int Sl = leftValue;
        int sR = rightValue;

        if (n == 1) return n;
        
        while (leftValue < rightValue) {
            if (Sl < sR) {
                Sl += ++leftValue;
            } else {
                sR += --rightValue;
            }
            if (Sl == sR && leftValue + 1 == rightValue - 1) {
                return leftValue + 1;
            }
        }

        return -1;
    }

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << pivotInteger(n);
    return 0;
}
