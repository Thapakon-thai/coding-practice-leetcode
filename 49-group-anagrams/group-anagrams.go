func groupAnagrams(strs []string) [][]string {
    group := make(map[[26]int][]string)

    for _, s := range strs {
        count := [26]int{}

        for _, c :=  range s {
            count[c - 'a']++
        }

        group[count] = append(group[count], s)
    }

    result := make([][]string, 0, len(group))
    for _, value  := range group {
        result = append(result, value)
    }

    return result
}