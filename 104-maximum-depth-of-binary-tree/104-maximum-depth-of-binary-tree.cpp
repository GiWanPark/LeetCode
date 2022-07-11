/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
	int MaxDepth=0;
public:
	int maxDepth(TreeNode* root) {
		if (root == nullptr) return 0;
		calDepth(root, 1);

		return MaxDepth;
	}
	int calDepth(TreeNode* node, int depth)
	{
		if (node == nullptr)
			return depth;
		if (MaxDepth < depth)
			MaxDepth = depth;

		calDepth(node->left, depth + 1);
		calDepth(node->right, depth + 1);

		return depth;
	}
};