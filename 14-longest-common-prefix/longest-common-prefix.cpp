class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }

        string prefix;
        string firstWord = strs[0];
        for (int i = 0; i < firstWord.length(); i++) {
            for (string str : strs) {
                if (str[i] !=   firstWord[i]) {return prefix;}
            }
            prefix += firstWord[i];
        }

        return prefix;
    }
};