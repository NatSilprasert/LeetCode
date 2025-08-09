class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> roman = Map.of(
            'I', 1,
            'V', 5,
            'X', 10,
            'L', 50,
            'C', 100,
            'D', 500,
            'M', 1000
        );

        int answer = 0;
        int i = 0;

        while (i < s.length()) {
            if (i + 1 < s.length() && roman.get(s.charAt(i)) < roman.get(s.charAt(i + 1))) {
                answer += roman.get(s.charAt(i + 1)) - roman.get(s.charAt(i));
                i += 2;
            } else {
                answer += roman.get(s.charAt(i));
                i += 1;
            }
        }

        return answer;
    }
}