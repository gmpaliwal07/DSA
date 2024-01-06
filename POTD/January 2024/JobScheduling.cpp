#include<bits/stdc++.h>
using namespace std;
 int maxProfit(int currentIndex, vector<vector<int>>&job, vector<int>&startTime, vector<int>&memo)
    {
        if(currentIndex == job.size()) return 0;
        
        if(memo[currentIndex] != -1) return memo[currentIndex];
        
        int nextIndex = lower_bound(startTime.begin(),startTime.end(),job[currentIndex][1]) - startTime.begin();
        

        int take = job[currentIndex][2] + maxProfit(nextIndex,job,startTime,memo);
        
     
        int notTake = maxProfit(currentIndex+1,job,startTime,memo);
        
        memo[currentIndex] = max(take,notTake);
        return memo[currentIndex];
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
         int n = startTime.size();
        vector<vector<int>>job;
        vector<int>memo(n,-1);
        
        for(int index = 0; index < n; index++)
            job.push_back({startTime[index],endTime[index],profit[index]});
        
        sort(job.begin(),job.end());
        sort(startTime.begin(),startTime.end());
        
        return maxProfit(0,job,startTime,memo);
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
vector<int> startTime;
vector<int> endTime;
vector<int> profit;
for(auto i = 0; i < n; i++) {
    int a;
    cin >>a;
    startTime.push_back(a);
}
for(auto i = 0; i < n; i++) {
    int b;
    cin >>b;
    endTime.push_back(b);
}
for(auto i = 0; i < n; i++) {
    int a;
    cin >>a;
    profit.push_back(a);
}
cout << jobScheduling(startTime,endTime,profit);
return 0;
}


// O(2N*logN)
// O(n)