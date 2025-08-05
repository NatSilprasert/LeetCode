class Solution {
public:
    bool isPalindrome(string s) {
        string word;
        string reverseWord;
        for (char c : s) {
            if (isalnum(c) != 0) {
                word += tolower(c);
            } 
        }
        for (int i = word.length() - 1; i >= 0; i--) {
            reverseWord += word[i];
        }
        return word == reverseWord;
    }
};