/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void traverse(Node* root, vector<Node*> v) {
        if(!root or v.empty())   return;
        vector<Node*> t;
        for(int i=0; i<v.size(); i++) {
            if(i < v.size()-1)  v[i]->next = v[i+1];
            if(v[i]->left)    t.push_back(v[i]->left);
            if(v[i]->right)   t.push_back(v[i]->right);
        }
        traverse(root, t);
    }
    Node* connect(Node* root) {
        vector<Node*> level = {root};
        traverse(root, level);
        return root;
    }
};
