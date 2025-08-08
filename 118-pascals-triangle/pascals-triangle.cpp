class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for (int i = 0; i < numRows; i++) {
            if (i == 0) {
                answer.push_back({1});
            }
            else if (i == 1) {  
                answer.push_back({1, 1});
            }
            else {
                vector<int> v;
                for (int j = 0; j < answer[i - 1].size() - 1; j++) {
                    v.push_back(answer[i - 1][j] + answer[i - 1][j + 1]);
                }
                v.insert(v.begin(), 1);
                v.push_back(1);
                answer.push_back(v);   
            }
        }
        return answer;
    }
};