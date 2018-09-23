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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if (root == NULL)
            return vec;
        bool zig = false;
        vector<TreeNode*> last = {root};
        while (!last.empty()) {
            vector<TreeNode*> line;
            for (auto it = last.begin(); it != last.end(); it++) {
                if ((*it)->left != NULL)
                    line.push_back((*it)->left);
                if ((*it)->right != NULL)
                    line.push_back((*it)->right);
            }
            vector<int> temp;
            for (auto it = last.begin(); it != last.end(); it++) {
                temp.push_back((*it)->val);
            }
            if (zig) {
                reverse(temp.begin(), temp.end());
            }
            zig = !zig;
            vec.push_back(temp);
            last = line;
        }
        return vec;
    }
};