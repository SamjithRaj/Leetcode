class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    vector<pair<int, int>> v;
    for (auto it : mpp)
    {
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end());
    for (int i = v.size() - 1; i >= 0 && k > 0; i--, k--)
    {
        ans.push_back(v[i].second);
    }
    return ans;
    }
};