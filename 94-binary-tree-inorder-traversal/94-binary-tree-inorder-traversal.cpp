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
    vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		
		stack<TreeNode*> stk;
		while (root != nullptr)
		{
			if (root->left != nullptr)
			{
				stk.push(root);
				root = root->left;
				continue;
			}
			else
			{
				if(root->val != -101)
					result.push_back(root->val);
				root->val = -101;
			}

			if (root->right != nullptr)
			{
				stk.push(root);
				root = root->right;
				continue;
			}
			else if (stk.empty())
			{
				break;
			}
			else
			{
				if (root == stk.top()->left)
				{
					delete stk.top()->left;
					stk.top()->left = nullptr;
				}
				else if(root == stk.top()->right)
				{
					delete stk.top()->right;
					stk.top()->right = nullptr;
				}
				root = stk.top();
				stk.pop();
			}
		}
		
		return result;
	}
};