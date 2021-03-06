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
        node = root
        levelHead = TreeLinkNode(0)
        
        while node: # loop for each level
            needle = levelHead
            
            while node: # loop for current level
                if node.left:
                    needle.next = node.left 
                    needle = needle.next 
                if node.right:
                    needle.next = node.right
                    needle = needle.next
                node = node.next
            node = levelHead.next
            levelHead.next = None