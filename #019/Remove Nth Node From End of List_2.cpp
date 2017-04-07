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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start = new ListNode(0);
        ListNode *p = start, *q = start;
        start->next = head;
        for (int i = 0; i <= n; ++i) {
            p = p->next;
        }
        while (p != NULL) {
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        return start->next;
    }
};