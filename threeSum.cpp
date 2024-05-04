class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int low = i + 1;
            int high = nums.size() - 1;
            int sum = 0;
            while (low < high) {
                sum = nums[i] + nums[low] + nums[high];
                if (sum == 0) {
                    s.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                } else if (sum > 0) {
                    high--;
                } else {
                    low++;
                }
            }
        }
        vector<vector<int>> ans;
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};
