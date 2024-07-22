#include<bits/stdc++.h>
using namespace std;
vector<string>  Sort(vector<int> &heights, vector<string> &names) {
           int numberOfPeople = names.size();

        vector<int> sortedIndices(numberOfPeople);
        iota(begin(sortedIndices), end(sortedIndices), 0);

        sort(begin(sortedIndices), end(sortedIndices),
             [&heights](int a, int b) { return heights[a] > heights[b]; });

        vector<string> sortedNames;
        sortedNames.reserve(numberOfPeople);
        for (int i = 0; i < numberOfPeople; i++) {
            sortedNames.push_back(move(names[sortedIndices[i]]));
        }

        return sortedNames;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> height = {180, 160,170};
vector<string> Name = {"Marry", "John", "Stark"};
vector<string> ans = Sort(height, Name);
for(auto it : ans ){
    cout << it << " ";
}
return 0;
}