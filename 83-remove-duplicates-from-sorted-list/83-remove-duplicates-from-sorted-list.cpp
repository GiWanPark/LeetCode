/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) { 
		ListNode* result = nullptr;
		while (head != nullptr)
		{
			if (head->next != nullptr && head->val == head->next->val)
			{
				head = head->next;
				continue;
			}
			if (result == nullptr)
			{
				result = new ListNode(head->val);
			}
			else
			{
				ListNode* temp = result;
				while (temp->next != nullptr)
				{
					temp = temp->next;
				}
				temp->next = new ListNode(head->val);
			}
			head = head->next;
		}
		return result;
	}
};