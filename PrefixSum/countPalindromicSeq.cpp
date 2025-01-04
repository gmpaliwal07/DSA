#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vi,greater<ll>>
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;
#define all(x) (x).begin(), (x).end()
#define deb(x) cout << #x << " = " << x << "\n";
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void file_i_o() {
    FAST_IO
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int countPalindromicSubsequence(string s) {
    vi firstOccurrence(26, -1), lastOccurrence(26, -1);
    ll n = s.length();
    
    // Find first and last occurrence of each character
    loop(i, 0, n) {
        if (firstOccurrence[s[i] - 'a'] == -1) {
            firstOccurrence[s[i] - 'a'] = i;
        }
        lastOccurrence[s[i] - 'a'] = i;
    }
    
    ll result = 0;
    // Iterate through each character as the middle of the palindrome
    loop(i, 0, 26) {
        if (firstOccurrence[i] != -1 && firstOccurrence[i] < lastOccurrence[i]) {
            unordered_set<char> uniqueChars;
            // Collect unique characters between the first and last occurrence
            loop(j, firstOccurrence[i] + 1, lastOccurrence[i]) {
                uniqueChars.insert(s[j]);
            }
            result += uniqueChars.size();
        }
    }
    
    return result;
}
int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    #ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms\n";
    #endif
    
    string s1 = "aabca";
    cout << countPalindromicSubsequence(s1) << "\n";
    return 0;
}
