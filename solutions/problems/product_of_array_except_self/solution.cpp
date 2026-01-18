class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tmul = 1;
        int zeroCount = 0;
        int n = nums.size();
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            if(nums[i]==0) zeroCount++;
            else tmul *= nums[i];
        }

        for(int i=0; i<n; i++){
            if(zeroCount > 1){
                ans[i] = 0;
            }
            else if(zeroCount == 1){
                if(nums[i]==0) ans[i] = tmul;
                else ans[i] = 0;
            }
            else{
                ans[i] = tmul / nums[i];
            }
        }
        return ans;
    }
};
