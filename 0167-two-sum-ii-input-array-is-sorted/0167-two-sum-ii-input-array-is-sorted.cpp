class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int j = n-1; 
        int i = 0;
        int sum = 0;
        while(i<j){
            sum = numbers[i]+numbers[j];
            if(sum == target)
                return {i+1, j+1};
            if(sum>target)
                j--;
            if(sum<target)
                i++;
        }
        return {};
    }
};