class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* tmp = res;
        int carrier = 0;
        while(l1 || l2 || carrier)
        {
            int l1Val = l1 ? l1->val : 0;           
            int l2Val = l2 ? l2->val : 0;
            int sum = l1Val + l2Val + carrier;
            carrier = sum / 10;
            tmp->next = new ListNode(sum % 10);
            tmp = tmp->next;
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
        }
        return res->next;
    }
};
