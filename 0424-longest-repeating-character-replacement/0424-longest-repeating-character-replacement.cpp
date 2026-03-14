class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char, int> mpp; 
        int left = 0, maxFreq = 0, maxLen = 0; 
        for(int right = 0; right<n; right++){
            mpp[s[right]]++;
            maxFreq = max(maxFreq, mpp[s[right]]);

            if((right-left+1) - maxFreq > k){
                mpp[s[left]]--;
                left++;
            }
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen; 
    }
};