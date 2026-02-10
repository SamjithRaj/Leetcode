class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();

        unordered_map<int, int> mpp; 
        int need = 0;
        for(int i = 0; i<n; i++){
            need = target-arr[i];
            if(mpp.count(need)){
                return {mpp[need], i};
            }
            mpp[arr[i]] = i;
        }
        return {};
    }
};