class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* l3 = new ListNode(0);   // dummy head (heap)
        ListNode* start = l3;
        ListNode* justStart = l3;

        int sum = 0, i = 0, r;            // i = carry

        while (l1 != nullptr || l2 != nullptr || i != 0) {
            int a = (l1 != nullptr) ? l1->val : 0;
            int b = (l2 != nullptr) ? l2->val : 0;

            sum = a + b + i;
            r = sum % 10;
            i = sum / 10;

            start->val = r;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;

            // create next node only when needed
            if (l1 != nullptr || l2 != nullptr || i != 0) {
                start->next = new ListNode(0);
                start = start->next;
            }
        }

        return justStart;   // safe
    }
};
