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
	ListNode* swapPairs(ListNode* head) {
		if (head==nullptr||head->next==nullptr)
		{
			return head;
		}
		ListNode* p = head->next;
		ListNode* q = p->next;
		head->next = swapPairs(q);
		p->next = head;
		return p;
	}
};