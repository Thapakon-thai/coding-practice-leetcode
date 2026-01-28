func twoSum(nums []int, target int) []int {
    check := make(map[int]int) // difference: index

    for i, v := range nums {
        checkedIndex, exist := check[v]
        if exist {
            return []int{checkedIndex, i}
        } else {
            check[target - v] = i
        }
    }
    return []int{}
}