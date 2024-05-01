class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(auto i:nums){s.insert(i);}
        int max=0;
        for(auto &i:s){
            if(!s.count(i-1)){
                int l=1;
                while(s.count(i+l)){
                    l++;
                }
                if(l>max){max=l;}
            }
        }
        return max;
    }
};
