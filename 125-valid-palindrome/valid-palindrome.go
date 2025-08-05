func isPalindrome(s string) bool {
    left := 0
    right := len(s) - 1
    for left < right {
        for left < right && !isAlphanumeric(rune(s[left])) {
            left++
        }
        for left < right && !isAlphanumeric(rune(s[right])) {
            right--
        }
        
        if strings.ToLower(string(s[left])) != strings.ToLower(string(s[right])) {
            return false
        }

        left++
        right--
    }
    return true   
}

func isAlphanumeric(r rune) bool {
    return unicode.IsLetter(r) || unicode.IsDigit(r)
}