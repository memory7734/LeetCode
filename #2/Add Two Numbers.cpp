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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* head = new ListNode(0);
		ListNode* p = head;
		int sum = 0;
		while (l1 != NULL || l2 != NULL || sum > 9)
		{
			sum /= 10;
			sum = (l1 == NULL ? 0 : l1->val) + (l2 == NULL ? 0 : l2->val) + sum;
			p->next = new ListNode(sum % 10);
			l1 = (l1 == NULL ? l1 : l1->next);
			l2 = (l2 == NULL ? l2 : l2->next);
			p = p->next;
		}
		if (sum / 10 == 1) p->next = new ListNode(1);
		return head->next;
	}
};