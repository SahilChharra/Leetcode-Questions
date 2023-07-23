class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ls = INT_MAX;
        int pro=0;
        int curr=0;

        for(int i=0;i<n;i++){
            if(prices[i]<ls){
                ls=prices[i];
            }
            curr = prices[i]-ls;
            if(pro<curr){
                pro=curr;
            }
        }

        return pro;
    }
};