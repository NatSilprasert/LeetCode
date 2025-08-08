func generate(numRows int) [][]int {
    answer := make([][]int, numRows)

    for i := 0; i < numRows; i++ {
        row := make([]int, i+1)
        row[0], row[i] = 1, 1

        for j := 1; j < i; j++ {
            row[j] = answer[i-1][j-1] + answer[i-1][j]
        }

        answer[i] = row
    }

    return answer
}