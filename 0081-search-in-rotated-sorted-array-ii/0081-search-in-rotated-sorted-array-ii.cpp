int piv(vector<int>& nums){
    int s = 0;
    int e = nums.size()-1;
    int m = s + (e-s)/2;

    while(s<e){

        if(nums[m]==nums[s] && nums[e]==nums[m]){
            if(s < e && nums[s] > nums[s+1]) return s+1;
            s++;
            if(e > s && nums[e-1] > nums[e]) return e;
            e--;
        }
        else if(nums[m] > nums[e]) s= m+1;
        else e = m;

        m = s + (e-s)/2;
    }
    return s;
}
bool ser(vector<int>& nums, int t){

    int p = piv(nums);
    int s,e;

    if(p == 0){
        s = 0;
        e = nums.size()-1;
    }
    else if(t >= nums[p] && t <= nums[nums.size()-1]){

        s = p;
        e = nums.size()-1;

    }
    else{
        s= 0;
        e = p-1;
    }

    

    while(s <= e){

        int m = s + (e-s)/2;

        if(nums[m]==t) return true;
        else if(nums[m]>t) e = m-1;
        else s = m+1;
    }
    return false;
}
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        return ser(nums, target);
    }
};