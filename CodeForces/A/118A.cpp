#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    file_i_o();

    string tour;
    cin >> tour;

    string newTour = "";
    for (char ch : tour) {
        if (!isVowel(ch)) {
            newTour += '.';
            newTour += ch;
        }
    }
    
    return 0;
}
