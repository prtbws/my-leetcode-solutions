int first(vector<int>& nums, int t){
        int s = 0;
        int e = nums.size()-1;
        int m = s+(e-s)/2;
        int ans = -1;

        while(s<=e){

            if(nums[m] == t){
                ans = m;
                e = m-1;
            }
            else if(nums[m]>t){
                e = m-1;
            }
            else s = m+1;

            m = s+(e-s)/2;
        }
    return ans;
}
int sec(vector<int>& nums, int t){
        int s = 0;
        int e = nums.size()-1;
        int m = s+(e-s)/2;
        int ans = -1;

        while(s<=e){

            if(nums[m] == t){
                ans = m;
                s= m+1;
            }
            else if(nums[m]>t){
                e = m-1;
            }
            else s = m+1;

            m = s+(e-s)/2;
        }
    return ans;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f = first(nums, target);
        int l = sec(nums, target);

        return {f,l};
    }
};