func isPalindrome(x int) bool {
    if x < 0 {
        return false
    } else if x < 10 {
        return true
    }

    xStr := fmt.Sprintf("%d", x)
    level := len(xStr) - 1
    result := 0
    tempX := x // 121
    for i:=0; i<len(xStr); i++ {
        result += (tempX % 10) * int(math.Pow(float64(10), float64(level)))
        tempX /= 10
        level--
    }
    fmt.Println(result == x)
    fmt.Println(result)

    //1 * 10^2 = 100 + 
    
    return result == x
}