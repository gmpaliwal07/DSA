#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';  // Convert character to integer
        int inverted = 9 - digit; // Calculate 9 - digit

        if (inverted < digit) {
            // We only change it if it's not the first digit or it's not a 0
            if (i != 0 || inverted != 0) {
                x[i] = '0' + inverted; // Update the character
            }
        }
    }
    
    cout << x << endl;
    return 0;
}
