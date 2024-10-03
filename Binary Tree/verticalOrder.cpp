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
vector<vector<int>> verticalTraversal(TreeNode* root){
    map<int, map<int, multiset<int> > > nodes;
    queue<pair<TreeNode*, pair<int,int> > >todo;
    todo.push({root, {0,0}});
    while(!todo.empty()){
        auto p = todo.front();
        todo.pop();
        TreeNode* node = p.first;
        int x = p.second.first, y = p.second.second;
        nodes[x][y].insert(node->val);
        if(node->left) {
            todo.push({node->left, {x-1, y+1}});
        }
        if(node->right) {
            todo.push({node->right, {x+1, y+1}});
        }
    }
    vector<vector<int>> ans;
    for(auto p : nodes){
        vector<int> col;
        for(auto q : p.second) {
            col.insert(col.end(), q.second.begin(),q.second.end());
        }
        ans.push_back(col);
    }
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

   for(auto it : ans) {
    cout << it << " ";
   }

return 0;
}