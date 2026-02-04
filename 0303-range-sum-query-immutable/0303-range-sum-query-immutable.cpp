class NumArray {
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n);
        int runningSum = 0; 
        
        for(int i = 0; i<n; i++){
            runningSum += nums[i];
            prefix[i] = runningSum;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return prefix[right];
        }
        else{
            return prefix[right] - prefix[left-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */