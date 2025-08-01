class Solution {
public:
    int lengthOfLastWord(string s) {
        int index = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[s.length() - i - 1] == ' ' && index != 0) {
                return index;
            }
            else if (s[s.length() - i - 1] != ' ') {
                index += 1;
            }
        }
        return index;
    }
};