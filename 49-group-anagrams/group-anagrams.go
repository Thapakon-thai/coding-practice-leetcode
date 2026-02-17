import "strconv"

func groupAnagrams(strs []string) [][]string {
    group := make(map[string][]string)

    for _, s := range strs {
        count := make([]int, 26)

        for _, c :=  range s {
            count[c - 'a']++
        }

        key := strconv.Itoa(count[0])
        for i:=1; i<26; i++ {
            key += "," + strconv.Itoa(count[i])
        }

        group[key] = append(group[key], s)
    }

    result := [][]string{}
    for _, value  := range group {
        result = append(result, value)
    }

    return result
}