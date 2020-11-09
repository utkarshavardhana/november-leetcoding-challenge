/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int res=0;
    int findTilt(TreeNode* root) {
        DFS(root);
        return res;
    }
    
    int DFS(TreeNode* n) {
        if(n==NULL) return 0;
        int l=DFS(n->left);
        int r=DFS(n->right);
        res+=abs(l-r);
        return l+r+n->val;
    }
};
