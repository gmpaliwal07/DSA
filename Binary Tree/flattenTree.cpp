#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode * right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void flatten(TreeNode* root) {
        if (root == nullptr) return;
                
                flatten(root->left);
                flatten(root->right);
                
                TreeNode* tempRight = root->right;
                
                // Move the left subtree to the right
                root->right = root->left;
                root->left = nullptr; // Set the left child to null
                
                // Traverse to the end of the current right subtree
                TreeNode* current = root;
                while (current->right != nullptr) {
                    current = current->right;
                }
                
                current->right = tempRight;
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
root->right->right = new TreeNode(6);
root->left->left = new TreeNode(5);
root->left->right = new TreeNode(4);

flatten(root);
while (root) {
    cout << root->val;
    if (root->right) cout << "->"; // Print arrow only if the next node exists
    root = root->right; 
}

return 0;
}