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

int countDays(vector<vector<int>> &meeting, int days ){
    sort(meetings.begin(), meetings.end());
         
    int cnt = 0, lastend = 0;

    for (auto & it : meetings) {

        int start = it[0], end = it[1];

        if (start>lastend + 1) cnt += start - lastend -1;
        
        lastend = max(lastend, end);
    }

    if(days> lastend)  cnt += days - lastend;
    
    return cnt;
}
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif

int  n;
cin >> n;
int days;
cin >> days;

vector<vector<int>> meeting(n, vector<int>(2)); // Allocate space for n rows, each with 2 columns

for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
        cin >> meeting[i][j]; // Read input into the vector
    }
}

// Optional: Print the input for verification
for (const auto& m : meeting) {
    cout << m[0] << " " << m[1] << endl;
}


cout << countDays(meeting, days);
return 0;
}