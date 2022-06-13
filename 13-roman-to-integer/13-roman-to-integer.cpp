class Solution {
public:
    int romanToInt(string s) {
        int roman = 0;

        for (size_t i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'M')
            {
                roman += 1000;
            }
            else if (s[i] == 'D')
            {
                roman += 500;
            }
            else if (s[i] == 'C')
            {
                if (s[i + 1] == 'D')
                {
                    roman += 400;
                    ++i;
                }
                else if (s[i + 1] == 'M')
                {
                    roman += 900;
                    ++i;
                }
                else
                {
                    roman += 100;
                }
            }
            else if (s[i] == 'L')
            {
                roman += 50;
            }
            else if (s[i] == 'X')
            {
                if (s[i + 1] == 'L')
                {
                    roman += 40;
                    ++i;
                }
                else if (s[i + 1] == 'C')
                {
                    roman += 90;
                    ++i;
                }
                else
                {
                    roman += 10;
                }
            }
            else if (s[i] == 'V')
            {
                roman += 5;
            }
            else if (s[i] == 'I')
            {
                if (s[i + 1] == 'X')
                {
                    roman += 9;
                    ++i;
                }
                else if (s[i + 1] == 'V')
                {
                    roman += 4;
                    ++i;
                }
                else
                {
                    roman += 1;
                }
            }
        }

        return roman;
    }
};