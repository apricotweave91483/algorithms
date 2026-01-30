class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval = prices[0];
        int profit;
        int max_profit=0;
        for(int t:prices){
            if(t<minval)minval=t;
            if((t-minval)>max_profit)max_profit=t-minval;
        }
        return max_profit;
    }
};