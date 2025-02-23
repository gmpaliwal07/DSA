#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld  long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vi,greater<ll>>
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;
void file_i_o()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
struct TreeNode { 
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right){}
}
TreeNode* build(vector<int>& preorder, vector<int>& postorder, int& preIndex, int& postIndex) {
    TreeNode* root = new TreeNode(preorder[preIndex++]); // First element is root

    if (root->val != postorder[postIndex]) { // Check if left subtree exists
        root->left = build(preorder, postorder, preIndex, postIndex);
    }
    if (root->val != postorder[postIndex]) { // Check if right subtree exists
        root->right = build(preorder, postorder, preIndex, postIndex);
    }

    postIndex++; // Move postorder index forward
    return root;
}
TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
    int preIndex = 0, postIndex = 0;
    return build(preorder, postorder, preIndex, postIndex);
}
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif

vector<int> preorder = {1,2,4,5,3,6,7};
vector<int> postorder = {4,5,2,6,7,3,1};


return 0;
}