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

vector<int> TopView(TreeNode* root) {
   vector<int> ans;
   if(root == NULL) return ans;
   map<int,int> topNode;
   queue<pair<TreeNode*, int> > q;
   q.push(make_pair(root, 0));
   while(!q.empty()){
    pair<TreeNode*, int> temp = q.front();
    q.pop();
    TreeNode* frontNode = temp.first;
    int HD = temp.second;

    // check if the value is present or not
    if(topNode.find(HD) == topNode.end())
        topNode[HD] = frontNode->val;
    if(frontNode->left)
        q.push(make_pair(frontNode->left, HD-1));

    if(frontNode->right) 
        q.push(make_pair(frontNode->right, HD+1));
   }
   for(auto i : topNode) {
    ans.push_back(i.second);
   }
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

    vector<int> result = TopView(root);

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