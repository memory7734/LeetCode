# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxPathSum(self, root):
        def helper(root):
            if not root: return (None, 0)
            L, L_path = helper(root.left)
            R, R_path = helper(root.right)
            x = root.val
            return (max(L, R, x, L_path+x, R_path+x, L_path+R_path+x), max(x, x + max(L_path, R_path)))
        res = helper(root)
        return max(res[0], res[1])