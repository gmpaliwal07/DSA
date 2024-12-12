#include<bits/stdc++.h>
using namespace std;
long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());
        while (k--) {
            int largest = pq.top(); 
            pq.pop(); 
            int ele = (int) std::sqrt(largest); 
            pq.push(ele); 
        }
        long long ans = 0;
        while (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
        
        return ans;

    }
int main(int argc, char const *argv[])
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt" ,"w", stdout);
        #endif
        vector<int>  gifts = {25,6,4,9,100};
        int k = 4;
        cout << pickGifts(gifts,k);
    return 0;
    }


