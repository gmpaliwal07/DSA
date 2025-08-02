#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll, ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define ff first
#define ss second
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define logarr(arr, a, b)      \
    for (ll i = a; i < b; i++) \
        cout << arr[i] << ' '; \
    cout << endl;
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
long long minCost(vector<int> &basket1, vector<int> &basket2)
{
    map<int, int> total_count;

    for (auto it : basket1)
        total_count[it]++;
    for (auto it : basket2)
        total_count[it]++;

    long long min_val = LLONG_MAX;
    for (auto const &[fruit, count] : total_count)
    {
        if (count % 2 != 0)
            return -1;
        min_val = std::min(min_val, (long long)fruit);
    }

    std::vector<long long> fruits_to_swap;
    std::map<int, int> count1;
    for (int fruit : basket1)
        count1[fruit]++;

    for (auto const &[fruit, total_count] : total_count)
    {
        int diff = count1[fruit] - (total_count / 2);
        for (int i = 0; i < abs(diff); ++i)
        {
            fruits_to_swap.push_back(fruit);
        }
    }

    std::sort(fruits_to_swap.begin(), fruits_to_swap.end());

    long long total_cost = 0;
    int swaps_to_make = fruits_to_swap.size() / 2;
    for (int i = 0; i < swaps_to_make; ++i)
    {
        total_cost += std::min(fruits_to_swap[i], 2 * min_val);
    }

    return total_cost;
}
int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

vector<int> arr1 = {4,2,2,2};
vector<int> arr2 = {1,4,1,2};

cout << minCost(arr1, arr2);

    return 0;
}