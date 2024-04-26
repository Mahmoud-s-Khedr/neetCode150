    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int>mp;
        for(int i=0;i<nums.size();i++){
            int help=target-nums[i];
            if(mp.find(help) != mp.end()){
                return {mp[help],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
