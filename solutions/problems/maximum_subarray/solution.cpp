class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int crrSum = 0, maxSum = INT_MIN;
        for(int val : nums){
            crrSum+=val;
            maxSum=max(crrSum, maxSum);

            if (crrSum<0){
                crrSum=0;
            }
        }
        return maxSum;
    }
       
};