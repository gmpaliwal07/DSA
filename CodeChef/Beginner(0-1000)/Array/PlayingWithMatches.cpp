#include<bits/stdc++.h>
using namespace std;
int Result(int num) {
    vector<int> vec = {6,2,5,5,4,5,6,3,7,6};
      int matches = 0;
    while (num > 0) {
        int digit = num % 10; 
        matches += vec[digit]; 
        num /= 10; // Remove the rightmost digit
    }
    return matches;
}
int main(int argc, char const *argv[])
{
   #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
   int T;
    cin >> T; // Number of test cases

    while (T--) {
        int A, B;
        cin >> A >> B; // Read the values of A and B

        int sum = A + B;
        int totalMatches = Result(sum);
    
        cout << totalMatches << endl;
    }
return 0;
}