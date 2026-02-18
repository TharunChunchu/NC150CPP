/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(int &result,TreeNode *root,int cs){
        if(!root->left && !root->right){
            cs+=root->val;
            result+=cs;
            return;
        }
        cs+=root->val;
        cs*=10;
        if(root->left){
            solve(result,root->left,cs);
        }        
        if(root->right){
            solve(result,root->right,cs);
        }
    }
    int sumNumbers(TreeNode* root) {
        int res=0;
        solve(res,root,0);
        return res;
    }
};