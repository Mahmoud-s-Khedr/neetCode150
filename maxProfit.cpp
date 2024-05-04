class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int roi=0;
        int i=0,buy=10000;
        do{
            if(buy>prices[i]){
                buy=prices[i];
            }else if(prices[i]-buy>roi){
                roi=prices[i]-buy;
            }
            i++;
        }while(i<size);
        
        return roi;
    }
};
