int piv(vector<int>& nums){

    int s= 0;
    int e = nums.size()-1;

    int m = s + (e-s)/2;

    while(s<e){

        if(nums[m]>nums[e]) s = m+1;
        else e = m;

        m = s + (e-s)/2;
    }
    return s;
}
class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = piv(nums);
        return nums[i];
    }
};