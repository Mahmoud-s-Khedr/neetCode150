class Solution {
public:

    int maxArea(vector<int>& height) {
        int ptrr=0;
        int ptrl=height.size()-1;
        int area=0;
        while(ptrr!=ptrl){
            if( (ptrl-ptrr)*min( height[ptrr],height[ptrl] ) >area ){
                area = (ptrl-ptrr)*min( height[ptrr],height[ptrl] );
            }

            if(height[ptrr]<=height[ptrl]){
                ptrr++;
            }else{
                ptrl--;
            }
        }


        return area;
    }
};
