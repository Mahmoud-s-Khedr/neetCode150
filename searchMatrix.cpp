class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size();
        int m=matrix.size();
        int coSize=m*n;
        int low=0,high=coSize-1;
        int mid=(low+high)/2;
        while(high>=low){
            if(matrix[mid/n][mid%n]==target){
                return true;
            }else if(matrix[mid/n][mid%n]>target){
                high=mid-1;
                mid=(low+high)/2;
            }else if(matrix[mid/n][mid%n]<target){
                low=mid+1;
                mid=(high+low)/2;
            }
        }
        return false;
    }
};
