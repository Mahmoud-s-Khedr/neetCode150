class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz=nums.size();
        int low =0,high=sz-1,mid=(low+high)/2;
        while(low<=high){
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                high=mid-1;
                mid=(high+low)/2;
            }else{
                low=mid+1;
                mid=(low+high)/2;
            }
        }
        return -1;
    }
};
