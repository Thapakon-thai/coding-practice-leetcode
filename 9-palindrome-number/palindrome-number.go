func isPalindrome(x int) bool {
    if x < 0 {
        return false
    } else if x < 10 {
        return true
    }

    num := x
    res := 0
    for num > 0 {
        remainder := num % 10
        res = (res * 10) + remainder
        num /= 10
    }

    
    return res == x
}