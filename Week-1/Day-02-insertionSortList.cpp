/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode *node = new ListNode(-2147483648);
        ListNode *rt = node;
        while(head) {
            ListNode *root = node;
            while(root) {
                if((root->val <= head->val and root->next == NULL) or
                  (root->val <= head->val and root->next->val >= head->val)) {
                    ListNode* insertee = new ListNode(head->val);
                    insertee->next = root->next;
                    root->next = insertee;
                    break;
                } else {
                    root = root->next;
                }
            }
            head = head->next;
        }
        return rt->next;
    }
};
