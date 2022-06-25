class Solution {
public:
    int climbStairs(int n) {
		if (n < 3)
			return n;
		int a = 1, b = 2, i;
		for (i = 3; i <= n; ++i)
		{
			if (i % 2 == 1)
			{
				a = a + b;
			}
			else
			{
				b = a + b;
			}
		}

		if (i % 2 == 0)
		{
			return a;
		}
		return b;

	}
};