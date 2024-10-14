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
int findCeil(TreeNode* root, int key) 
{
    int ciel = -1;
    while(root != NULL) {
  if(root->val == key) {
        ciel = root->val;
        return ciel;
    }
    if(key > root->val) {
        root = root->right;
    }
    else {
        ciel = root->val;
        root = root->left;
    }
    }
  
    return ciel;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r",stdin);
freopen("output.txt" ,"w", stdout);
#endif
TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

return 0;
}