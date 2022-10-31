class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int prft=0, mn=INT_MAX;
        for(int i=0; i<prices.size(); i++)
        {
            mn=min(mn, prices[i]);
            prft=max(prft, prices[i]-mn);
            
        }
        return prft;
    }
};