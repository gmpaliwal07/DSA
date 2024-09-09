#include<bits/stdc++.h>
using namespace std;
 int MOD = 1e9 + 7;

    // Helper function to calculate 'left' array for maximum
    vector<int> calculateLeftMax(const vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n);
        stack<int> Left_st;

        for (int i = 0; i < n; i++) {
            while (!Left_st.empty() && arr[Left_st.top()] <= arr[i]) {
                Left_st.pop();
            }
            if (Left_st.empty()) {
                left[i] = i + 1;  // Total distance if no greater element found
            } else {
                left[i] = i - Left_st.top();  // Distance between current and greater element on left
            }
            Left_st.push(i);
        }

        return left;
    }

    // Helper function to calculate 'right' array for maximum
    vector<int> calculateRightMax(const vector<int>& arr) {
        int n = arr.size();
        vector<int> right(n);
        stack<int> Right_st;

        for (int i = n - 1; i >= 0; i--) {
            while (!Right_st.empty() && arr[Right_st.top()] < arr[i]) {
                Right_st.pop();
            }
            if (Right_st.empty()) {
                right[i] = n - i;  // Total distance if no greater element found
            } else {
                right[i] = Right_st.top() - i;  // Distance between current and greater element on right
            }
            Right_st.push(i);
        }

        return right;
    }
  int subArrayMax(vector<int>& arr) {
        int n = arr.size();

        // Calculate left and right contributions for maximum
        vector<int> left = calculateLeftMax(arr);
        vector<int> right = calculateRightMax(arr);

        long long int res = 0;
        for (int i = 0; i < n; i++) {
            long long prod = (left[i] * right[i]) % MOD;
            long long net = arr[i] * prod;
            res = (res + net) % MOD;
        }

        return res % MOD;
    }
int main(int argc, char const *argv[])
{

return 0;
}