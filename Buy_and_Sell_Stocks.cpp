Solution 1----->
 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,n=prices.size();
        int maxPro=0;
        for(int i = 0; i < n; i++)
        {
            for(int j=i+1; j< n; j++)
            {
                if(prices[j] > prices[i])
                    maxPro=max(prices[j] - prices[i],maxPro);
            }
        }
        return maxPro;
        
    }
};


Solution 2------>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro = 0;
        int minPrice = INT_MIN;
        for (int i = 0; i < n; i++)
        {
        minPrice = min(minPrice, prices[i]);
        maxPro = max(prices[i] - minPrice, maxPro);
    }
        return maxPro;
        
    }
};
