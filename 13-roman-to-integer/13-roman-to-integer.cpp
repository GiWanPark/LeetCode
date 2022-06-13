class Solution {
    const std::map<char, int> RomanMap = { 
            {'I', 1}
        ,   {'V', 5}
        ,   {'X', 10} 
        ,   {'L', 50} 
        ,   {'C', 100} 
        ,   {'D', 500} 
        ,   {'M', 1000} };
public:
    int romanToInt(string s) {
        int roman = 0;
        

        for (int i = 0; i < s.size(); ++i)
        {
            if (i + 1 < s.size())
            {
                if (RomanMap.find(s[i])->second < RomanMap.find(s[i + 1])->second)
                {
                    roman += RomanMap.find(s[i + 1])->second - RomanMap.find(s[i])->second;
                    ++i;
                    continue;
                }
            }
            
            roman += RomanMap.find(s[i])->second;
        }

        return roman;
    }
};