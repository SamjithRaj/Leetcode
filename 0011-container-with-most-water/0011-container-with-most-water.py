class Solution:
    def maxArea(self, height: List[int]) -> int:
        n = len(height)
        i = 0
        j = n-1
        area, maxArea = 0, 0

        while(i<j):
            area = min(height[i], height[j])*(j-i)
            maxArea = max(area, maxArea)

            if(height[i]<height[j]):
                i+=1
            else:
                j-=1
        
        return maxArea