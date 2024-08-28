#include<bits/stdc++.h>
using namespace std;
  vector<int> asteroidCollision(vector<int>& asteroids) {
           std::stack<int> st;

    for (int asteroid : asteroids) {
        bool destroyed = false;

        while (!st.empty() && asteroid < 0 && st.top() > 0) {
            if (st.top() < -asteroid) {
                st.pop();
                continue;
            } else if (st.top() == -asteroid) {
                st.pop();
            }
            destroyed = true;
            break;
        }

        if (!destroyed) {
            st.push(asteroid);
        }
    }

    std::vector<int> ans;
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    std::reverse(ans.begin(), ans.end());
    return ans;

    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 
vector<int> arr = {5,10,-5};
vector<int> ans = asteroidCollision(arr);

for(auto it :ans )
{
    cout << it << " ";
}
return 0;
}