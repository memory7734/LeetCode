# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        res=[]
        if root==None:
            return res
        last=[root];
        while(last):
            line=[]
            for x in last:
                if x.left:
                    line.append(x.left)
                if x.right:
                    line.append(x.right)
            temp=[x.val for x in last]
            res.insert(0,temp)
            last=line
        return res