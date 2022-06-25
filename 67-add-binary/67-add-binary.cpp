class Solution {
public:
    string addBinary(string a, string b) {
        int next = 0;
        int ai = a.size()-1;
        int bi = b.size()-1;
        int i;
        string& result = (a.size() > b.size()) ? a : b;

        if (ai > bi)
        {
            i = ai;
        }
        else
        {
            i = bi;
        }

        for (; i >= 0 ; --ai, --bi,--i)
        {
            if (( ai >= 0 && a[ai] == '1') && ( bi >= 0 && b[bi] == '1'))
            {
                if (next == 1)
                {
                    result[i] = '1';
                    next = 1;
                }
                else
                {
                    result[i] = '0';
                    next = 1;
                }                
            }
            else if(((ai >= 0 && a[ai] == '1') || (bi >= 0 && b[bi] == '1')))
            {
                if (next == 1)
                {
                    result[i] = '0';
                    next = 1;
                }
                else
                {
                    result[i] = '1';
                    next = 0;
                }
                
            }
            else if((ai >= 0 && a[ai] == '0') && (bi >= 0 && b[bi] == '0'))
            {
                if (next == 1)
                {
                    result[i] = '1';
                    next = 0;
                }
                else
                {
                    result[i] = '0';
                    next = 0;
                }
            }
            else if ((ai >= 0 && a[ai] == '0') || (bi >= 0 && b[bi] == '0'))
            {
                if (next == 1)
                {
                    result[i] = '1';
                    next = 0;
                }
                else
                {
                    result[i] = '0';
                    next = 0;
                }
            }
        }
        if (next == 1)
        {
            result = "1" + result;
        }
        
        return result;
    }
};