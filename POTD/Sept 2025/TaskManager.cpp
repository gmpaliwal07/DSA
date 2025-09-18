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
class TaskManager
{

    using Task = tuple<int, int, int>;
    priority_queue<Task> pq;

    unordered_map<int, pair<int, int>> taskMap;

public:
    TaskManager(vector<vector<int>> &tasks)
    {
        for (auto &it : tasks)
        {
            int userId = it[0], taskId = it[1], priority = it[2];
            pq.push({priority, taskId, userId});
            taskMap[taskId] = {priority, userId};
        }
    }

    void add(int userId, int taskId, int priority)
    {
        pq.push({priority, taskId, userId});
        taskMap[taskId] = {priority, userId};
    }

    void edit(int taskId, int newPriority)
    {
        int userId = taskMap[taskId].second;
        pq.push({newPriority, taskId, userId});
        taskMap[taskId] = {newPriority, userId};
    }

    void rmv(int taskId)
    {
        taskMap.erase(taskId);
    }

    int execTop()
    {
        while (!pq.empty())
        {
            auto [priority, taskId, userId] = pq.top();
            pq.pop();
            if (taskMap.find(taskId) != taskMap.end() &&
                taskMap[taskId].first == priority)
            {
                taskMap.erase(taskId);
                return userId;
            }
        }
        return -1;
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

    return 0;
}