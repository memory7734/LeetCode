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
		ListNode* start = new ListNode(0);
		start->next = head;
		ListNode* p = start;
		int duplicate;
		while (p->next&&p->next->next) {
			if (p->next->val == p->next->next->val) {
				duplicate = p->next->val;
				while (p->next&&p->next->val == duplicate)
					p->next = p->next->next;
			}
			else
				p = p->next;
		}
		return start->next;
	}
};