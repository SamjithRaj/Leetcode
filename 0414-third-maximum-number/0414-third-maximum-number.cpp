class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> distinct(nums.begin(), nums.end());
        
        if(distinct.size() < 3) {
            return *distinct.rbegin();
        }
        
        auto it = distinct.rbegin();
        advance(it, 2);
        return *it;
    }
};