func convertToTitle(columnNumber int) string {
    var str string
    for columnNumber > 0 {
        columnNumber--
        n := columnNumber % 26
        str = string('A' + n) + str
        columnNumber /= 26
    }
    return str
}