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
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;
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
class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
         unordered_set<string> exact;          
        unordered_map<string, string> caseMap; 
        unordered_map<string, string> vowelMap;

        //lowercase 
        auto lower = [&](string w) {
            for (auto &c : w) c = tolower(c);
            return w;
        };

        // replace
        auto devowel = [&](string w) {
            for (auto &c : w) {
                c = tolower(c);
                if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') c = '*';
            }
            return w;
        };


        for (string w : wordlist) {
            exact.insert(w);
            string lw = lower(w);
            if (!caseMap.count(lw)) caseMap[lw] = w;
            string vw = devowel(w);
            if (!vowelMap.count(vw)) vowelMap[vw] = w;
        }

        vector<string> ans;
        for (string q : queries) {
            if (exact.count(q)) {
                ans.push_back(q); 
            } else {
                string lq = lower(q);
                if (caseMap.count(lq)) {
                    ans.push_back(caseMap[lq]); 
                } else {
                    string vq = devowel(q);
                    if (vowelMap.count(vq)) {
                        ans.push_back(vowelMap[vq]); 
                    } else {
                        ans.push_back("");
                    }
                }
            }
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif

return 0;
}