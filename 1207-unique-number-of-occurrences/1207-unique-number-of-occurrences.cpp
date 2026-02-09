class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mpp; 

        for(int i = 0; i<n; i++){
            mpp[arr[i]]++;
        }
        unordered_map<int, int> seen;

        for(auto it : mpp){
            seen[it.second]++;
            if(seen[it.second] > 1){
                return false;
            }

        }
        return true;
    }
};