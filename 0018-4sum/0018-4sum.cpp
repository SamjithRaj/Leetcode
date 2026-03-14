
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> res = {}; 
        sort(nums.begin(), nums.end());
        for(int x = 0; x<n-3; x++){
            if(x>0 && nums[x] == nums[x-1])
                continue; 
        for(int i = x+1; i<n-2; i++){
            if(i>x+1 && nums[i] == nums[i-1])
                continue; 
            int j = i+1, k = n-1; 

            while(j<k){
                long long sum =(long long) nums[x]+nums[i]+nums[j]+nums[k];
                if(sum == target){
                    res.push_back({nums[x], nums[i], nums[j], nums[k]});
                while (j < k && nums[j] == nums[j+1]){
                     j++;
                }
                while (j < k && nums[k] == nums[k-1]){
                    k--;
                }
                j++; k--;
            }
            else if(sum < target){
                j++;
            }
            else{
                k--;
            }

        }
        }
        }
        return res; 
    }
};
