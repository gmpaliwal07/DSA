#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>> ans; 
        if (root == nullptr) {
            return ans; 
        }
        bool leftoright = true;
        queue<TreeNode*> q; 
        q.push(root); 

        while (!q.empty()) {
            int size = q.size(); 

            vector<int> level; 

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front(); 
                q.pop(); 

                level.push_back(node->val); 

                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }

if(!leftoright) reverse(level.begin(), level.end());
            ans.push_back(level); 

            leftoright = !leftoright
        }
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
    root->right->right = new TreeNode(6);


   vector<vector<int>>  ans2 = zigzagLevelOrder(root);
   for(auto i =0 ; i<ans2.size(); i++) {
    for(auto j = 0; j<ans2.size(); j++){
        cout << ans2[i][j] << " " << endl;
    }
   }

return 0;
}