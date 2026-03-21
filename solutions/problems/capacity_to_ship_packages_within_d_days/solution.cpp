class Solution {
public:
    bool cs(vector<int>& weights, int days, int capacity){

        int d = 1;
        int curr = 0;

        for(auto w : weights){
            if (curr+w > capacity){
                d++;
                curr = 0;
            }
            curr += w;
            
        }
        return d<=days;
    } 
    int shipWithinDays(vector<int>& weights, int days) {
        
        int s = *max_element(weights.begin(), weights.end());
        int e = accumulate(weights.begin(), weights.end(), 0);

        while(s < e){

            int m = s + (e-s)/2;

            if(cs(weights, days, m)) e = m;
            else s = m+1;
        }
        return e;
    }
};