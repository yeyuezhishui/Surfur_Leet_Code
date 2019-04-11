/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return NULL;
        if(head ->next == NULL)
            return head;
        if(head->next->next == NULL)
        {
            ListNode * newhead = head->next;
            newhead->next = head;
            head->next = NULL;
            return newhead;
        }
        ListNode * pre = head;
        ListNode * cur = head->next;
        ListNode * next = head->next->next;
        pre->next =NULL;
        while(next)
        {
            cur->next = pre;
            pre = cur;
            cur = next;
            next = cur->next;
        }
        cur->next = pre;
        return cur;
    }
};