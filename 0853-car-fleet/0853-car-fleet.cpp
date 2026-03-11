class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if(position.size() == 1) return 1;
        vector<pair<int, double>> cars;

        for(int i = 0; i < position.size(); i++){
            cars.push_back({position[i], (double)(target - position[i]) / speed[i]});
        }
        sort(cars.begin(), cars.end());
        int ans = 0;
        double time = 0;
        for(int i = cars.size() - 1; i >= 0; i--){
            if(cars[i].second > time){
                ans++;
                time = cars[i].second;
            }
            
        }
        return ans;
    }
};