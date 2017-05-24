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
	ListNode* deleteDuplicates(ListNode* head) {
		if (!head) return head;
		int last = head->val;
		ListNode *p = head;
		while (p != NULL&&p->next != NULL) {
			if (p->next->val == last)
				p->next = p->next->next;
			else {
				last = p->next->val;
				p = p->next;
			}
			
		}
		return head;
	}
};