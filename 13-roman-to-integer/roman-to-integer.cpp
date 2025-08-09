class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        int answer = 0;
        int i = 0;

        while (i < s.length()) {
            if (i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]]) {
                answer += roman[s[i + 1]] - roman[s[i]];
                i += 2;
            } else {
                answer += roman[s[i]];
                i += 1;
            }
        }

        return answer;
        
    }
};