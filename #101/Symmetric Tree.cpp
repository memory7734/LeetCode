/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
   public:
    bool both(TreeNode* leftNode, TreeNode* rightNode) {
        if (leftNode == NULL && rightNode == NULL)
            return true;
        if (leftNode != NULL && rightNode != NULL &&
            leftNode->val == rightNode->val)
            return both(leftNode->right, rightNode->left) &&
                   both(leftNode->left, rightNode->right);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        return both(root->left, root->right);
    }
};