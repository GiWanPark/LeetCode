class Solution {
public:
    bool isPalindrome(string s) {
		string remove;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				remove += s[i];
			else if (s[i] >= 'A' && s[i] <= 'Z')
				remove += std::tolower(s[i]);
			else if (s[i] >= '0' && s[i] <= '9')
				remove += s[i];
		}
		for (int i = 0; i < remove.length() / 2; ++i)
		{
			if (remove[i] != remove[remove.length() - i - 1])
				return false;
		}
		return true;
	}
};