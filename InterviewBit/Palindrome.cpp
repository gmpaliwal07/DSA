#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &A) {
    int left = 0;
    int right = A.size() - 1;
    
    // Check characters from both ends
    while (left < right) {
        if (A[left] != A[right]) return false;
        left++;
        right--;
    }
    return true;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string str = "a man, a plan, a canal : panama";
cout << isPalindrome(str);
return 0;

}