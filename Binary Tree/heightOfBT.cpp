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

int heightOfBT(TreeNode* root){
if(root == NULL) return 0;

int lh = heightOfBT(root->left);
int rh = heightOfBT(root->right);

return 1+ max(lh,rh);
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
   cout << heightOfBT(root);
    return 0;


return 0;
}