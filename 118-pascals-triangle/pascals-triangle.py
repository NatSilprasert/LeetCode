class Solution(object):
    answer = []
    def generate(self, numRows):
        answer = []
        for i in range(numRows):
            if i == 0: 
                answer.append([1])
            elif i == 1:
                answer.append([1, 1])
            else:
                arr = []
                for j in range(len(answer[i - 1]) - 1):
                    arr.append(answer[i - 1][j] + answer[i - 1][j + 1])
                answer.append([1] + arr + [1])
        return answer




        