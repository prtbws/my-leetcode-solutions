class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mxp = 0;
        int mi = INT_MAX;

        for(int i=0; i< prices.size(); i++){

            mi = min(mi, prices[i]);
            mxp = max(mxp, prices[i]-mi);
        }

        return mxp;
    }
};