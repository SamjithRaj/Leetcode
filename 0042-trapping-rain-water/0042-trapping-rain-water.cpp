class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1; 
        int lMax = 0, rMax = 0; 
        int cnt = 0; 

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= lMax)
                    lMax = height[left];
                else
                    cnt += lMax - height[left];
                left++;
            } else {
                if (height[right] >= rMax)
                    rMax = height[right];
                else
                    cnt += rMax - height[right];
                right--;
            }
        }

        return cnt;
    }
};