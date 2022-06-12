class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0)
        return false;

        int max = 1000000000;
        while (1)
        {
            if (max > x)
                max /= 10;
            else
                break;
        }
        while (x != 0)
        {
            if (x / max != x % 10)
                return false;

            x = x % max / 10;
            max /= 100;

        }
        
        return true;
    }
};