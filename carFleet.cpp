//i solved this problem with the same idea but the code with messy neetcode solution is much cleaner
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars;
        for (int i = 0; i < position.size(); i++) {
            double time = 1.0*(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        sort(cars.begin(), cars.end());
        
        double maxTime = 0;
        int result = 0;
        
        for (int i = position.size() - 1; i >= 0; i--) {
            double time = cars[i].second;
            if (time > maxTime) {
                maxTime = time;
                result++;
            }
        }
        
        return result;
    }
};
