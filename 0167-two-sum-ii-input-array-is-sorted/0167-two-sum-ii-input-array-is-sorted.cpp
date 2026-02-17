class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
     int n = a.size();
     int i = 0;
     int j = n - 1;
     while(i<j){
        if((a[i]+a[j]) > target){
            j--;
        }
        else if((a[i]+a[j]) == target)
            return {i+1, j+1};
        else
            i++;
     } 
     return {};  
    }
    
};