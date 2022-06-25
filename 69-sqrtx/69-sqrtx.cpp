class Solution {
public:
    int mySqrt(int x) {
        for (unsigned long i = 0; i <= x; ++i)
        {
            if (i * i > static_cast<unsigned long>(x))
                return i - 1;
            else if (i * i == static_cast<unsigned long>(x))
                return i;
        }
        return 1;
    }
    
};