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
public:
    bool isSymmetric(TreeNode* root) {
		if (root == nullptr) return true;

		return compare(root->left, root->right);
	}
	bool compare(TreeNode* left, TreeNode* right)
	{
		if (left == nullptr && right == nullptr)
			return true;
		else if (left == nullptr && right != nullptr || left != nullptr && right == nullptr)
			return false;
		if (left->val != right->val)
			return false;
		else if (left->val == right->val)
		{
			if (compare(left->left, right->right) == false)
				return false;
			if (compare(left->right, right->left) == false)
				return false;
		}
		return true;
	}
};