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
bool getPath(TreeNode* root, vector<int>& arr, int x) {

        if (!root) {
            return false;
        }

        arr.push_back(root->val);
        if (root->val == x) {
            return true;
        }
        if (getPath(root->left, arr, x)
            || getPath(root->right, arr, x)) {
            return true;
        }
        arr.pop_back();
        return false;
    }

vector<int> rootToNode(TreeNode *root, int B) {
   vector<int> arr;
        if (root == NULL) {
            return arr;
        }

        getPath(root, arr, B);

  return arr;

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

    vector<int> result = rootToNode(root, 7);

    for (int val : result) {
        cout << val << " ";
    }

    // Clean up memory
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;
return 0;
}