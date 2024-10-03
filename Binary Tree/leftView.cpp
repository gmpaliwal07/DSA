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
void solve(TreeNode* root, vector<int> &ans, int level) {
    if(root == NULL) return;
    if(level == ans.size()) {
        ans.push_back(root->val);
    }
    solve(root->left,ans, level+1);
    solve(root->right,ans, level+1);

}
vector<int> LeftView(TreeNode* root) {
   vector<int> ans;
   solve(root, ans, 0 );
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

    vector<int> result = LeftView(root);

    for (int val : result) {
        cout << val << " ";
    }

    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;
return 0;
}