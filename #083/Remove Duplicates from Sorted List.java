/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null)
            return head;
        HashSet<Integer> set = new HashSet<>();
        ListNode p = head;
        set.add(head.val);
        while (p != null && p.next != null) {
            if (set.contains(p.next.val)) {
                p.next = p.next.next;
            } else {
                set.add(p.next.val);
            p = p.next;
            }
        }
        return head;
    }
}