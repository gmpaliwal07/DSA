#include <bits/stdc++.h>
using namespace std;
int atoi(string &s)
{
    int i = 0;

    while (i < s.length() && s[i] == ' ')
    {
        i++;
    }

    int sign = 1;

    
    if (i < s.length() && (s[i] == '-' || s[i] == '+'))
    {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    int result = 0;

    while (i < s.length() && isdigit(s[i]))
    {
        int digit = s[i] - '0';

        if (result > (INT32_MAX - digit) / 10)
        {
            return (sign == 1) ? INT32_MAX : INT32_MIN;
        }

        result = result * 10 + digit;
        i++;
    }
    return result * sign;
}

int main(int argc, char const *argv[])
{
#ifndef Online_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << atoi(s);

    return 0;
}