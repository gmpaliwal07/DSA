#include<bits/stdc++.h>
using namespace std;

string happyString(int a, int b, int c) {
    priority_queue<pair<int, char>> pq;
    
    if(a > 0) pq.emplace(a, 'a');
    if(b > 0) pq.emplace(b, 'b');
    if(c > 0) pq.emplace(c, 'c');
    
    string ans = "";
    
    while(!pq.empty()) {
        auto first = pq.top();
        pq.pop();
        
        // Check if the last two characters in 'ans' are the same as 'first.second'
        if (ans.size() >= 2 && ans[ans.size() - 1] == first.second && ans[ans.size() - 2] == first.second) {
            if (pq.empty()) break;
            
            // Use the second most frequent character
            auto second = pq.top();
            pq.pop();
            
            ans += second.second;
            second.first--;
            
            if (second.first > 0) pq.emplace(second);
            
            pq.emplace(first);
        } else {
            ans += first.second;
            first.first--;
            
            if (first.first > 0) pq.emplace(first);
        }
    }
    
    return ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int a = 1, b = 1, c = 7;
    cout << happyString(a, b, c) << endl;
    
    return 0;
}
