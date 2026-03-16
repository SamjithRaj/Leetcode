class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int n = nums.size(); 
        long long prefix = 0;
        int cnt = 0, need;
        for(auto x : nums){
            prefix += x; 
            need = prefix - k; 
            if(mpp.count(need))
                cnt+=mpp[need];
            mpp[prefix]++;
        }
        return cnt; 
    }
};