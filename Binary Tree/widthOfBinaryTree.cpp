#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

    int widthOfBinaryTree(TreeNode* root) {
       if (!root) {
            return 0;
        }

        int ans = 0;
        queue<pair<TreeNode*, unsigned long long>> q;  // Use unsigned long long for positions
        q.push({root, 0});

        // Level-order traversal
        while (!q.empty()) {
            int size = q.size();
            unsigned long long mmin = q.front().second;  // Normalize the positions
            unsigned long long first, last;

            for (int i = 0; i < size; i++) {
                unsigned long long cur_id = q.front().second - mmin;  // Normalized position
                TreeNode* node = q.front().first;
                q.pop();

                if (i == 0) {
                    first = cur_id;
                }
                if (i == size - 1) {
                    last = cur_id;
                }

                if (node->left) {
                    q.push({node->left, cur_id * 2 + 1});
                }
                if (node->right) {
                    q.push({node->right, cur_id * 2 + 2});
                }
            }
            ans = max(ans, (int)(last - first + 1));
        }

        return ans;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif

TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(6);
    root->left->right->right = new TreeNode(7);

   cout << widthOfBinaryTree(root);
    // Clean up memory
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;
return 0;
}