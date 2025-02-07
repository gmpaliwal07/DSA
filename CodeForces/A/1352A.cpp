#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define iterloop(it, container) for (auto it : container)
#define pb push_back
#define endl '\n'

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

int main()
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "ms\n";
#endif

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vi r_n;
        int multiplier = 1;

        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                r_n.pb(digit * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }

        cout << r_n.size() << endl;
        iterloop(it, r_n)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
