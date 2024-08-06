#include<bits/stdc++.h>
using namespace std;
int minimumPushes(string &s) {
         unordered_map<char, int> freqMap;
        for (char& c : s) {
            ++freqMap[c];
        }

        priority_queue<int> freQueue;

        for (auto it : freqMap) {
            freQueue.push(it.second);
        }

        int totalPushes = 0;
        int index = 0;

        while (!freQueue.empty()) {
            totalPushes += (1 + (index / 8)) * freQueue.top();
            freQueue.pop();
            index++;
        }

        return totalPushes;

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif
string s  = "xyzxyzxyzxyz";
cout << minimumPushes(s);
return 0;
}