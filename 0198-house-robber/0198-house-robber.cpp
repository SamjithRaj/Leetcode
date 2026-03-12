class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1, -1);
        return memo(0, dp, nums);
    }

    int memo(int i, vector<int>& dp, vector<int>& nums){
        if(i>=nums.size()){
            return 0;
        }

        if(dp[i]!=-1){
            return dp[i];
        }
        
    return dp[i] = max(memo(i+1, dp, nums), nums[i]+memo(i+2, dp, nums));
        
    }
};