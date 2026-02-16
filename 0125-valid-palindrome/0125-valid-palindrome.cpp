class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(isalnum(s[i]) && isalnum(s[j])){
                if(tolower(s[i])!=tolower(s[j])){
                    return false;
                }
                j--;
                i++;
            }
            if(!isalnum(s[i]))
                i++;
            if(!isalnum(s[j]))
                j--;
        }
        return true;
    }
};