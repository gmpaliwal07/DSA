#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld  long double
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
#define iterloop(it, arr) for(auto it : arr)
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;
#define PREFIX_SUM(n) vector<int> Prefix(n + 1, 0)
#define QUERY_RESULT(ans, Prefix, L, R) ans.push_back(Prefix[R + 1] - Prefix[L])

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

vector<int> vowelStrings(vs& words, vector<vi>& queries) {
    int n = words.size();
    PREFIX_SUM(n);
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'}; 

    loop(i, 0, n) {
        Prefix[i + 1] = Prefix[i];
        if (vowels.count(words[i].front()) && vowels.count(words[i].back())) {
            Prefix[i + 1]++;  
        }
    }

    vector<int> ans; 
    iterloop(query, queries) {
        int L = query[0], R = query[1];  
        QUERY_RESULT(ans, Prefix, L, R);
    }

    return ans;  
}

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif

    vs words  = {"aba","bcb","ece", "aa","e"};
    vector<vector<int>> queries = {{0,2},{1,4},{1,1}};
    vector<int> ans = vowelStrings(words, queries);
    iterloop(it, ans) {
        cout << it << " ";
    }
    return 0;
}
