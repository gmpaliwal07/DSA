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

int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    int n = fruits.size();
    int unplaced = 0;
    vector<bool> used(n, false);  // Track which baskets are used
    
    for (int i = 0; i < n; i++) {
        bool placed = false;
        
        // Find leftmost available basket with sufficient capacity
        for (int j = 0; j < n; j++) {
            if (!used[j] && baskets[j] >= fruits[i]) {
                used[j] = true;  // Mark basket as used
                placed = true;
                cout << "Fruit " << i << " (quantity " << fruits[i] 
                     << ") placed in basket " << j << " (capacity " << baskets[j] << ")\n";
                break;
            }
        }
        
        if (!placed) {
            unplaced++;
            cout << "Fruit " << i << " (quantity " << fruits[i] << ") remains unplaced\n";
        }
    }
    
    return unplaced;
}

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
    
    // Test Example 1
    cout << "Example 1:\n";
    vector<int> fruits1 = {4,2,5};
    vector<int> baskets1 = {3,5,4};
    cout << "Result: " << numOfUnplacedFruits(fruits1, baskets1) << "\n\n";
    
    // Test Example 2
    cout << "Example 2:\n";
    vector<int> fruits2 = {3,6,1};
    vector<int> baskets2 = {6,4,7};
    cout << "Result: " << numOfUnplacedFruits(fruits2, baskets2) << "\n";
    
    #ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"ms\n";
    #endif
    
    return 0;
}