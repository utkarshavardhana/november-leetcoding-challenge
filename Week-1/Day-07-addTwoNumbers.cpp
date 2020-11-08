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
    ListNode* reverse(ListNode *l) {
        ListNode *curr = l, *next = NULL, *prev = NULL;
        while(curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);   l2 = reverse(l2);
        ListNode* res = new ListNode(0), *temp = res;
        int carry = 0;
        while(l1 or l2 or carry) {
            int t = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            temp->next = new ListNode(t%10);
            carry = t/10;
            temp = temp->next;
            if(l1)  l1 = l1->next;
            if(l2)  l2 = l2->next;
        }
        res = reverse(res->next);
        return res;
    }
};
