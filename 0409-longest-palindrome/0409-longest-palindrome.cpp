class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128, 0);
        int length = 0; 

        for(auto it : s){
            freq[it]++;
        }
        bool flag = false; 
        for(auto it : freq){
            length += (it/2)*2;

            if(it%2 == 1 && flag == false){
                length += 1;
                flag = true; 
            }
        }
        return length;
    }
};