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
    void traverse(TreeNode* root, vector<int>& v) {
        if(!root)   return;
        traverse(root->left, v);
        v.push_back(root->val);
        traverse(root->right, v);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> v;
        traverse(root, v);
        int sum = 0;
        for(int i=lower_bound(v.begin(), v.end(), low)-v.begin(); i<=lower_bound(v.begin(), v.end(), high)-v.begin(); i++)  sum += v[i];
        return sum;
    }
};
