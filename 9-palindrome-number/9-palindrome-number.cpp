class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0)
            return false;
        
        std::vector<int> SeparatedInt = {0};
        
        for(; x != 0;)
        {
            SeparatedInt.push_back(x%10);
            x /= 10;
        }
        
        for(int i=1; i<=SeparatedInt.size()/2; ++i)
        {
            if(SeparatedInt[i] != SeparatedInt[SeparatedInt.size()-i])
                return false;
        }
        
        return true;
    }
};