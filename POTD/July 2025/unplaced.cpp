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
 void build(int ind, int low, int high, const vector<int>& baskets,
               vector<int>& seg) {
        if (low == high) {
            seg[ind] =
                baskets[low]; // Fix: Use baskets[low] instead of baskets[ind]
            return;
        }
        int mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, baskets, seg); // Fix: Changed high to mid
        build(2 * ind + 2, mid + 1, high, baskets, seg);
        seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
    }

    bool querySegmentTree(int ind, int low, int high, vector<int>& seg,
                          int val) {
        if (seg[ind] < val) {
            return false;
        }
        if (low == high) {
            seg[ind] = -1;
            return true;
        }

        int mid = (low + high) / 2;
        bool placed;
        if (seg[2 * ind + 1] >= val) {
            placed = querySegmentTree(2 * ind + 1, low, mid, seg, val);

        } else {
            placed = querySegmentTree(2 * ind + 2, mid + 1, high, seg, val);
        }

        seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
        return placed;
    }


int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
       vector<int> seg(4 * fruits.size(), 0);

        build(0, 0, fruits.size() - 1, baskets, seg);
        int unplaced = 0;
        for (auto it : fruits) {
            if (!querySegmentTree(0, 0, fruits.size() - 1, seg, it)) {
                unplaced++;
            }
        }
        return unplaced;
    }
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
vector<int> fruits = {4,2,5};
vector<int> baskets = {3,5,4};

cout << numOfUnplacedFruits(fruits, baskets);
return 0;
}