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
	ListNode* partition(ListNode* head, int x) {
		ListNode* low = new ListNode(0);
		ListNode* high = new ListNode(0);
		ListNode* lowp = low, *highp = high;
		while (head != NULL){
			if (head->val < x) {
				lowp->next = head;
				lowp = lowp->next;
			} else {
				highp->next = head;
				highp = highp->next;
			}
			head = head->next;
		}
		highp->next = NULL;
		lowp->next = high->next;
		return low->next;
	}
};