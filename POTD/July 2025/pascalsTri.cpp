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
    int main(int argc, char const *argv[])
    {
    clock_t begin = clock();
    file_i_o();
    #ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
    #endif
    int numRows = 5;
    vector<vector<int>> ans;


        for (int i = 0; i < numRows; ++i)
        ans.push_back(vector<int>(i + 1, 1)); //1 , 11 pair
        
            for (int i = 2; i < numRows; ++i)
        for (int j = 1; j < ans[i].size() - 1; ++j)
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];

            for(auto  i= 0; i < ans.size(); i++) {
                for (auto j = 0; j < ans.size(); j++)
                {
                    cout << ans[i][j];
                }
                cout << endl;
            }
    return 0;
    }