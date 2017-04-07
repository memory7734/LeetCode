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
        ListNode *p = head, *q = head;
        if (head->next == NULL) {
            free(head);
            return NULL;
        }
        int pos = n;
        while (pos-- > 0) {
            p = p->next;
        }
        while (p != NULL && p->next != NULL) {
            p = p->next;
            q = q->next;
        }
        if (p==NULL&&q == head) {
            head = head->next;
            free(q);
            return head;
        }
        p = q->next;
        if (n == 1) {
            q->next = NULL;
        } else {
            q->next = q->next->next;
        }
        free(p);
        return head;
    }
};