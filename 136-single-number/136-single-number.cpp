class Solution {
    std::map<int, bool> xCheck;
public:
    int singleNumber(vector<int>& nums) {
        for (auto& num : nums)
		{
			auto it = xCheck.find(num);
			if (it != xCheck.end())
				it->second = false;
			else
				xCheck.insert(std::make_pair(num, true));
		}
		for (auto& it : xCheck)
			if (it.second)
				return it.first;
        
        return 0;
    }
};