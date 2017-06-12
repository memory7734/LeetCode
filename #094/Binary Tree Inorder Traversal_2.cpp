class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> res;
		if (!root) {
			return res;
		}
		stack<TreeNode *> s;
		s.push(root);
		while (!s.empty()) {
			TreeNode*p = s.top();
			if (p->left) {
				s.push(p->left);
				p->left = NULL;
			} else {
				res.push_back(p->val);
				s.pop();
				if (p->right)
					s.push(p->right);
			}
		}
		return res;
	}
};