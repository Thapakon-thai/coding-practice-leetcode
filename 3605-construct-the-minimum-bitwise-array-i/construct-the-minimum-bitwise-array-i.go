func minBitwiseArray(nums []int) []int {
    ans := []int{}

    for _, v := range nums {
        bit := 0
        x := 0
        for x < v {
            bit = x | (x+1)
            if bit == v {
                ans = append(ans, x)
                break
            }
            x++
        }
        if bit > v {
            ans = append(ans, -1)
        }

        

    }
    return ans
}

// 0, 3, -> 0, 3 -> 0, 3, 

// -1, 1