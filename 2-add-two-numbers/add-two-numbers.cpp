class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(); // dummy node
        ListNode* current = dummy;
        int carry = 0;

        while(l1 || l2 || carry) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }

        return dummy->next; 
    }
};
