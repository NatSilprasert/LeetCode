func longestCommonPrefix(strs []string) string {
    if len(strs) == 0 {
        return ""
    }

    prefix := ""
    firstWord := strs[0]

    for i := 0; i < len(firstWord); i++ {
        char := firstWord[i]
        for j := 1; j < len(strs); j++ {
            if i >= len(strs[j]) || strs[j][i] != char {
                return prefix
            }
        }
        prefix += string(char)
    }

    return prefix
}