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

void reorder(TreeNode * root) {
    if(root == NULL ) return;
    int child = 0;
    if(root->left) {
        child+=root->left->val;
    }
    if(root->right) {
        child+=root->right->val;
    }
if(child >= root->val) root->val = child;
    else {
        if(root->left) root->left->val = root->val;
        else if(root->right) root->right->val  = root->val;
    }
    reorder(root->left);
    reorder(root->right);
    
    int total = 0;
    if(root->left) total+=root->left->val;
    if(root->right) total+=root->right->val;
    if(root->left or root->right) root->val = total;
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



reorder(root);

  cout <<  ans->val;

    // Clean up memory
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;
return 0;
}