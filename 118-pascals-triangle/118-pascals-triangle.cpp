class Solution {
public:
    vector<vector<int>> generate(int numRows) {
		vector<vector<int>> result;

		for (int i = 0; i < numRows; ++i)
		{
			vector<int> row = { 1 };
			for (int j = 1; j <= i; ++j)
			{
				if (j == i)
				{
					row.push_back(1);
					continue;
				}

				row.push_back(result[i - 1][j - 1] + result[i - 1][j]);
			}
			result.push_back(row);
		}

		return result;
	}
};