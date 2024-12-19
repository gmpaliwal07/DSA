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


void preorder(vector<int> &ans, TreeNode* root) {
    if (root == NULL) {
            return;
        }
        
        ans.push_back(root->val);
        preorder(ans,root->left); 
        preorder(ans, root->right); 
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(ans,root);
        return ans;
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
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = preorderTraversal(root);

    for (int val : result) {
        cout << val << " ";
    }

    // Clean up memory
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;

return 0;
}