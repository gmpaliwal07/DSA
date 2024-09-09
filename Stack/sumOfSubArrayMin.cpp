#include<bits/stdc++.h>
using namespace std;

    // calculate the 'left' array
    vector<int> calculateLeft(const vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n);
        stack<int> Left_st;

        Left_st.push(0);
        left[0] = 1; // distance = 1

        for (int i = 1; i < n; i++) {
            while (!Left_st.empty() && arr[i] < arr[Left_st.top()]) {
                Left_st.pop();
            }

            if (Left_st.empty()) {
                left[i] = i + 1; // total distance if no smaller element found
            } else {
                left[i] = i - Left_st.top(); // distance = i - Left_st.top()
            }

            Left_st.push(i);
        }

        return left;
    }

//  calculate the 'right' array
    vector<int> calculateRight(const vector<int>& arr) {
        int n = arr.size();
        vector<int> right(n);
        stack<int> Right_st;

        Right_st.push(n - 1);
        right[n - 1] = 1; // distance = 1

        for (int i = n - 2; i >= 0; i--) {
            while (!Right_st.empty() && arr[i] <= arr[Right_st.top()]) {
                Right_st.pop();
            }

            if (Right_st.empty()) {
                right[i] = n - i; 
            } else {
                right[i] = Right_st.top() - i;
            }

            Right_st.push(i);
        }

        return right;
    }

    int sumSubarrayMins(vector<int>& arr) {
          int n = arr.size();

       
        vector<int> left = calculateLeft(arr);
        vector<int> right = calculateRight(arr);

    
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