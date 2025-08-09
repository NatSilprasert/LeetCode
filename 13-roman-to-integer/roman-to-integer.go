func romanToInt(s string) int {
    roman := map[rune]int{
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000,
    }

    answer := 0
    runes := []rune(s)  // แปลง string เป็น slice ของ rune
    i := 0

    for i < len(runes) {
        if i+1 < len(runes) && roman[runes[i]] < roman[runes[i+1]] {
            answer += roman[runes[i+1]] - roman[runes[i]]
            i += 2
        } else {
            answer += roman[runes[i]]
            i++
        }
    }

    return answer
}