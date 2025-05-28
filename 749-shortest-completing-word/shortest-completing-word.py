class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        letters_in_licensePlate= [s for s in licensePlate.lower() if s.isalpha()]
        res = []
        for word in words:
            temp_licensePlate = letters_in_licensePlate[:]
            for letter in word:
                if letter in temp_licensePlate:
                    temp_licensePlate.remove(letter)
                
            if len(temp_licensePlate) == 0:
                res += [word]
        ans = "" 
        min_len = float('inf')
        for x in res:
            if len(x) < min_len:
                min_len = len(x)
                ans = x

        return ans


        
