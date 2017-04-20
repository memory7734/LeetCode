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
	ListNode* reverseKGroup(ListNode* head, int k) {
		if (head == nullptr || k <= 1) 
		{
			return head;
		}
		ListNode* q = head;
		vector<ListNode*> v;
		while (q != nullptr&&v.size() < k )
		{
			v.push_back(q);
			q = q->next;
		}
		if (k!=v.size())
		{
			return head;
		}
		ListNode* tmp = v[v.size() - 1]->next;
		for (int i = v.size()-1; i >0 ; i--)
		{
			v[i]->next = v[i - 1];
		}
		v[0]->next = reverseKGroup(tmp, k);
		return v[v.size() - 1];
	}
};