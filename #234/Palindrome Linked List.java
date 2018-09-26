/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        
        if (head == null) return true;
        
        // Find Mid-Point
        ListNode slow = head, fast = head;
        while (fast.next != null && fast.next.next != null)
        {
            fast = fast.next.next;
            slow = slow.next;
        }
        
        // Reverse Second Half of List
        ListNode prev = null, iter = slow;
        while (iter != null)
        {
            ListNode next = iter.next;
            iter.next = prev;
            prev = iter;
            iter = next;
        }
        
        // Compare Both Lists
        while (head != null && prev != null)
        {
            if (head.val != prev.val) return false;
            head = head.next;
            prev = prev.next;
        }
        
        return true;
        
    }
}