pair<int, int>solve(vector<int>& nums, int k){

    int s = 0;
    int e = nums.size()-1;

    while(s < e){

        int sum = nums[s]+nums[e];

        if(sum > k) e--;
        else if(sum < k) s++;
        else return {s+1, e+1};
    }
    return {-1,-1};
}
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto ans = solve(numbers, target);
        return {ans.first, ans.second};
    }
};