func sumAndMultiply(n int) int64 {
    var x int64
    var sum int64
    var multiplier int64 = 1

    for n > 0 {
        digit := int64(n % 10)
        if digit != 0 {
            x = (digit * multiplier) + x
            multiplier *= 10
            sum += digit
        }
        n /= 10
    }

    return x * sum
}