class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, -1);
        return memo(n, dp);
    }
    
    int memo(int n, vector<int>& dp){
        if(n == 0)
            return 0; 

        if(dp[n]!=-1)
            return dp[n];
        
        int minCnt = INT_MAX; 
        for(int i = 1; i<=sqrt(n); i++){
            int sq = i*i;
            int currCnt = 1 + memo(n - sq, dp);
            minCnt = min(minCnt, currCnt);
        }
        return dp[n] = minCnt;
    }
};