class Solution {
std::map<int, int> xCheck;
public:
	int majorityElement(vector<int> nums) {
		for (int n : nums)
		{
			std::map<int, int>::iterator it = xCheck.find(n);
			if ( it != xCheck.end())
			{
				++it->second;
				continue;
			}
			xCheck.insert(std::make_pair(n, 1));
		}
		int max = -1;
		int i;
		for (auto& it : xCheck)
		{
			if (it.second > max)
			{
				max = it.second;
				i = it.first;
			}
		}

		return i;
	}
};