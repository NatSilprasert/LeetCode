class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0) {
            return "";
        }

        String prefix = "";
        String firstWord = strs[0];
        for (int i = 0; i < firstWord.length(); i++) {
            for (String str : strs) {
                if (i >= str.length() || str.charAt(i) !=  firstWord.charAt(i)) {
                    return prefix;
                }
            }
            prefix += firstWord.charAt(i);
        }

        return prefix;
    }
}