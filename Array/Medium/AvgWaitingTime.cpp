#include<bits/stdc++.h>
using namespace std;
double averageWaitingTime(vector<vector<int>>& customers) {
long long currentTime = 0;
    long long totalWaitTime = 0;
     for (auto customer : customers) {
        int arrival = customer[0];
        int prepTime = customer[1];
        
        if (currentTime < arrival) {
            currentTime = arrival;
        }
        
        currentTime += prepTime;
        
        totalWaitTime += currentTime - arrival;
    }

    return (double)totalWaitTime / customers.size();
    }
int main(int argc, char const *argv[])
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    #endif
    vector<vector<int>> customers = {{1,2},{2,5},{4,3}};
    cout << averageWaitingTime(customers);
return 0;
}
