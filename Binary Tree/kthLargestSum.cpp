#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector<int> levelOrder(TreeNode* root) {
     vector<int> ans; 
        if (root == nullptr) {
            return ans; 
        }
        queue<TreeNode*> q; 
        q.push(root); 

        while (!q.empty()) {
            int sum = 0;
            int size = q.size(); 

            vector<int> level; 

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front(); 
                q.pop(); 
                sum+=node->val;
             

                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            ans.push_back(sum);
        }

        return ans; 
}
  long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<int> ans = levelOrder(root);
        if(ans.size()<k) return -1;
        sort(ans.begin(), ans.end(), greater<int>());
        return ans[k-1];
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

    return 0;


return 0;
}