class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> mpp(26, 0); 
        for(auto x:s){
            mpp[x-'a']++;
        }
        for(auto y : t){
            mpp[y-'a']--;
        }
        for(auto it : mpp){
            if(it!=0){
                return false;
            }
        }
        return true; 
    }
};