class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int s = 0, e = arr.size()-1, m;

        while(s<=e){

            m = s+(e-s)/2;

            int miss = arr[m] - m -1;

            if(miss < k) s = m+1;
            else e = m-1;

        }
        return s+k;
    }
};