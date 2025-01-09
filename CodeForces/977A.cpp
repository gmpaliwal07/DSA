#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i, a, b) for (ll i = a; i < b; i++)

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

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

    int n, k;
    cin >> n >> k;

    while (k > 0) {
        int last_digit = n % 10;
        if (last_digit != 0) {
            n -= 1; 
        } else {
            n /= 10; 
        }
        k--;  
    }

    cout << n;
    return 0;
}
