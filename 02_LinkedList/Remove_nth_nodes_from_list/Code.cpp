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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *dummy = new ListNode(1000);
       dummy->next = head;
       ListNode *temp = head;
       int len = 1;
       while(temp->next){
        temp = temp->next;
        len++;
       } 
       int steps = len - n;
       ListNode *curr = dummy;
       for(int  i = 0 ;i<steps;i++){
            curr = curr->next;
       }
       ListNode *Del = curr->next;
       curr->next = Del->next;
       delete Del;
       return dummy->next;
    }
};
