class Solution:
    def maxPerformance(self, n: int, speed: List[int], efficiency: List[int], k: int) -> int:
        MOD = 10**9+7
        candidates=zip(efficiency,speed)
        candidates=sorted(candidates,key=lambda x:x[0],reverse=True)
        speedSum,ans=0,0
        heap=[]
        for e,s in candidates:
            heapq.heappush(heap,s)
            speedSum+=s
            if len(heap)>k:
                speedSum-=heapq.heappop(heap)
            ans=max(ans,speedSum*e)
        return ans%MOD
        
        