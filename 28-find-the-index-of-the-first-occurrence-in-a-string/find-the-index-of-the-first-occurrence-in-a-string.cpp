class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length()) {
            return -1;
        }

        for (int i = 0; i < haystack.length() - needle.length() + 1; i++) {
            string word;
            for (int j = 0; j < needle.length(); j++) {
                word += haystack[i + j];
            } 
            if (word == needle) {
                return i;
            }
        } 
        return -1;
    }
};