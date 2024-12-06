#include<bits/stdc++.h>
using namespace std;
string addBinary(string s1, string s2){
     string result = "";
    int carry = 0;
    int i = s1.length() - 1;
    int j = s2.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += s1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += s2[j] - '0';
            j--;
        }

        carry = sum / 2;
        result += (sum % 2 + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s1 = "111";
    string s2 = "1";
    cout << addBinary(s1,s2);
}