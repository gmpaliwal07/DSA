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

TreeNode* lowestCommonAncestor(TreeNode * root, TreeNode* p, TreeNode* q) {
    if(root == NULL || root == p || root == q) {return root;}
    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    if(right == NULL) return left;
    else if(left == NULL ) return right;
    else return root; 
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

TreeNode* p = root->left->left;
TreeNode* q = root->right;

    TreeNode* ans = lowestCommonAncestor(root, p, q);

  cout <<  ans->val;

    // Clean up memory
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;
return 0;
}