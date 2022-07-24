class Solution {
const int alpha[26] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26 };
public:
	int titleToNumber(string columnTitle) {
		unsigned int n = 0;
		unsigned int sum = 0;
		for (int i = columnTitle.length() - 1; i >= 0; --i)
		{
			sum += std::pow(26, n++)*alpha[columnTitle[i] - 'A'];
		}

		return sum;
	}
};