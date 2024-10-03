#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

void solve(TreeNode* root, int len, int &maxLen, int sum, int &maxSum){
    if(root == NULL) {
        if(len > maxLen) {
            maxLen = len;
            maxSum = sum;
        }
        if(len == maxLen) {
            maxSum = max(sum, maxSum);
                    }
            return;
    }
    sum +=root->val;
    solve(root->left, len+1, maxLen, sum, maxSum);
    solve(root->right, len+1, maxLen, sum, maxSum);
    
}
int maxSumPath(TreeNode* root) {
    int len = 0 , maxLen = INT_MIN, sum = 0, maxSum = INT_MIN;
    solve(root, len, maxLen, sum, maxSum);
    return maxSum;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

 TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    // root->left->left = new TreeNode(4);
    // root->left->right = new TreeNode(5);

   cout << maxSumPath(root);

return 0;
}