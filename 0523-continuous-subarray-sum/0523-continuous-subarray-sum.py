class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        seen =set()
        running =0
        prev=0
        for x in nums: 
            running+=x
            running%=k
            
            if running in seen:
                return True
            seen.add(prev)
            prev=running
        return False