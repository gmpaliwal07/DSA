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
class FoodRatings {
private:
    
    unordered_map<string, pair<string,int>> food_info;

    unordered_map<string, set<pair<int,string>>> cusine_info;

public:
    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings) {
        for (int i = 0; i < foods.size(); i++) {
            food_info[foods[i]] = {cuisines[i], ratings[i]};
            cusine_info[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }

    void changeRating(string food, int newRating) {
        auto [cuisine, oldRating] = food_info[food];

        cusine_info[cuisine].erase({-oldRating, food});
        cusine_info[cuisine].insert({-newRating, food});

        food_info[food].second = newRating;
    }

    string highestRated(string cuisine) {
        return cusine_info[cuisine].begin()->second;
    }
};
int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif
    int n; // number of foods
    cin >> n;

    vector<string> foods(n);
    vector<string> cuisines(n);
    vector<int> ratings(n);

    for (int i = 0; i < n; i++)
        cin >> foods[i];
    for (int i = 0; i < n; i++)
        cin >> cuisines[i];
    for (int i = 0; i < n; i++)
        cin >> ratings[i];

    int q; // number of queries
    cin >> q;

    vector<string> queries(q);
    vector<vector<string>> args(q);

    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
        int k;
        cin >> k; // number of arguments
        args[i].resize(k);
        for (int j = 0; j < k; j++)
            cin >> args[i][j];
    }

    return 0;
}