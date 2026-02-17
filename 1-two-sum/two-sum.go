func twoSum(nums []int, target int) []int {
    store := make(map[int]int)

    for i, x := range nums {
        store_i, exist := store[x]
        if exist {
            return []int{store_i, i}
        } else {
            store[target - x] = i
        }
    }

    return []int{}
}