class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = INT_MAX; 
        int currProfit = 0; 
        int maxProfit = 0; 

        for(int i = 0; i<n; i++){
            if(prices[i]<min){
                min = prices[i];
            }
            currProfit = prices[i]-min; 
            maxProfit = max(maxProfit, currProfit);
        }
        return maxProfit; 
    }
};