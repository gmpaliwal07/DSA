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
void traverseLeft(TreeNode* root, vector<int> &ans) 
{
    if((root == NULL ) || (root->left == NULL && root->right == NULL)) {
        return;
    }
    ans.push_back(root->val);
    if(root->left)
        traverseLeft(root->left ,ans);
    else
        traverseLeft(root->right, ans);
}
void traverseLeaf(TreeNode* root, vector<int> &ans) {
    if(root == NULL ) return;
    if(root->left == NULL && root->right == NULL) {
        ans.push_back(root->val);
        return;
    } 
    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
}
void traverseRight(TreeNode* root, vector<int> &ans) {
     if((root == NULL ) || (root->left == NULL && root->right == NULL)) {
        return;
    }
    if(root->right) 
        traverseRight(root->right, ans);
    else 
        traverseRight(root->left, ans);
    ans.push_back(root->val);
}
vector<int> BoundryValue(TreeNode* root) {
   vector<int> ans;
   if(root == NULL) return ans;
   ans.push_back(root->val);
    traverseLeft(root->left,ans);
    traverseLeaf(root->left,ans);
    traverseLeaf(root->right, ans);
    traverseRight(root->right,ans);
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
   vector<int> ans = BoundryValue(root);

   for(auto it : ans) {
    cout << it << " ";
   }

return 0;
}