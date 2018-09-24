# Definition for binary tree with next pointer.
# class TreeLinkNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
#         self.next = None

class Solution:
    # @param root, a tree link node
    # @return nothing
    def connect(self, root):
        if not root:
            return
        nextLevel = current = root.left
        head = root
        while nextLevel:
            while head:
                head.left.next = head.right
                current = head.right
                head = head.next
                if head:
                    current.next = head.left
            head = nextLevel
            nextLevel = nextLevel.left