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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *res = new ListNode();
        ListNode *head = res;
        while(l1 || l2 ) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int add = x + y + carry;
            carry = add / 10;
            add = add % 10;
            
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
            
            if(carry || l1 || l2) 
                res->next = new ListNode();
            res->val = add;
            if(res)
                res = res->next;

        }
        
        if (carry) res->val = carry;
        return head;
    }
};