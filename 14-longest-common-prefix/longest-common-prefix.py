class Solution(object):
    def longestCommonPrefix(self, strs):

        first_word = strs[0]
        prefix = ""
        i = 0

        if len(strs) == 1: return first_word

        while i < len(first_word):
            for e in strs[1::]:
                if len(e) <= i or first_word[i] != e[i]:return prefix
            prefix += first_word[i]
            i += 1
        return prefix
            


        