class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for(int x : nums) {
            sum += x;
        }

        int expected = n * (n + 1) / 2;
        return expected - sum;
    }
};
