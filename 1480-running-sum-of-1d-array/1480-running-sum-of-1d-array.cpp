class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size(); 

        int runningSum = 0; 
        vector<int> prefix(n);

        for(int i = 0; i<n; i++){
            runningSum += nums[i];
            prefix[i] = runningSum;
        }

        return prefix;
    }
};