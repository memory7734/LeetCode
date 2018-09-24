# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    ANS = []
    def pathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        # need to reset ans variables due to way func is run
        self.ANS = [] 
        if root == None: return []
        vals = [root.val]
        if not root.left and not root.right:
            return [[root.val]] if root.val == sum else []
        # dfs to the leaf node, and bring the total from that point to leaf nodes, and check
        if root.left:
            self.mod_dfs(root.left,root.val,vals,sum)
        if root.right:
            self.mod_dfs(root.right,root.val,vals,sum)
        return self.ANS 
            
    def mod_dfs(self,root,total,vals,sum):
        total += root.val
        if total == sum and not root.left and not root.right:
            vals_root = vals + [root.val]
            self.ANS.append(vals_root)
        if root.left:
            vals_l = vals + [root.val]
            self.mod_dfs(root.left,total,vals_l,sum)
        if root.right:
            vals_r = vals + [root.val]
            self.mod_dfs(root.right,total,vals_r,sum)
        if not root.left and not root.right:
            return
        