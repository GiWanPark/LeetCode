class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
		int min = prices[0];
		for (int i = 1; i < prices.size(); ++i)
		{
			if (prices[i] - min > result)
			{
				result = prices[i] - min;
				continue;
			}
			if (min > prices[i])
			{
				min = prices[i];
			}
		}

		return result;
    }
};