#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define loop(i, a, b) for (int i = a; i <= b; i++)

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

    int r, c;
    cin >> r >> c;

    loop(i, 1, r)
    {
        loop(j, 1, c)
        {
            if (i % 2 == 1) // Rows with all '#'
            {
                cout << "#";
            }
            else
            {
                if (i % 4 == 0 && j == 1) 
                {
                    cout << "#";
                }
                else if (i % 4 == 2 && j == c) 
                                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
