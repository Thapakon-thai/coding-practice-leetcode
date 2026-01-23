func twoSum(nums []int, target int) []int {
    // สร้าง hash map target - curr: currIndex
    hash := make(map[int]int)
    for index, value := range nums {
        i, exist := hash[value]
        // fmt.Printf("%d: ", index)
        // fmt.Println(hash)
        if exist {
            return []int{i, index}
        } else {
            hash[target - value] = index
        }
    }
    return []int{}
}