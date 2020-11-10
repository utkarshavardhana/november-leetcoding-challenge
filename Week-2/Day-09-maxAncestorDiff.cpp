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
    void traverse(TreeNode* root, int prevMax, int prevMin, int &maxVal) {
        if(!root)   return;
        maxVal = max({maxVal, abs(root->val - prevMax), abs(root->val - prevMin)});
        prevMax = max(prevMax, root->val);
        prevMin = min(prevMin, root->val);
        traverse(root->left, prevMax, prevMin, maxVal);
        traverse(root->right, prevMax, prevMin, maxVal);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root)   return 0;
        int maxVal = 0;
        traverse(root, root->val, root->val, maxVal);
        return maxVal;
    }
};
