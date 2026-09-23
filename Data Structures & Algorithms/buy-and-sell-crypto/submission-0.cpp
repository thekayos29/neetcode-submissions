class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minValue=prices[0];
        int max1=0;
        for(int i=1;i<prices.size();i++){
            minValue=min(minValue,prices[i]);
            max1=max(max1,prices[i]-minValue);

        }
        if(max1>0){
            return max1;
        }
        return 0;
        

        
    }
};
