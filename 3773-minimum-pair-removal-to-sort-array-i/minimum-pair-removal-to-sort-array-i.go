func minimumPairRemoval(nums []int) int {
    count := 0
    numsCopy := nums
    for len(numsCopy) > 1 {
        isIncreasing := true
        targetIndex := -1
        minSum := 50001
        for i:=0; i<len(numsCopy)-1; i++ {
            if nums[i] > nums[i+1] {
                isIncreasing = false
            } 

            sum := nums[i] + nums[i+1]
            if sum < minSum {
                minSum = sum
                targetIndex = i
            }
        }
        if isIncreasing {
            break
        }
        count++
        numsCopy[targetIndex] = minSum
        numsCopy = append(numsCopy[:targetIndex+1], numsCopy[targetIndex+2:]...)

    }


    return count
}