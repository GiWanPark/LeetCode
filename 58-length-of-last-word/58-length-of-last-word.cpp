class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = s.find_last_not_of(' ');
        return last - s.find_last_of(' ', last);
    }
};