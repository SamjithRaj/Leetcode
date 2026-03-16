class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp; 
        vector<pair<int, int>> freq; 
        vector<int> res; 

        for(auto x : nums)
            mpp[x]++;
        for(auto& [val,cnt] : mpp){
            freq.push_back({cnt, val});
        }
        sort(freq.begin(), freq.end(), greater<pair<int, int>>());
        for(int i = 0; i<k; i++){
            res.push_back(freq[i].second);
        }
            return res; 
        }   
};