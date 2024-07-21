#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 bool isSameTree(TreeNode* p, TreeNode* q) {
           if(p == NULL && q == NULL){
            return true;
        }
         if( p== NULL || q==NULL){
            return false;
        }
         return ((p->val == q->val)
            && isSameTree(p->left, q->left)
                && isSameTree(p->right, q->right));
    }
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    root1->left->left = new TreeNode(4);
    root1->left->right = new TreeNode(5);

     TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);
    root2->left->left = new TreeNode(4);
    root2->left->right = new TreeNode(5);

    cout << isSameTree(root1,root2);

return 0;
}