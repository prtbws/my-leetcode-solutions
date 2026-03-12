class Solution {
public:
    void sortColors(vector<int>& nums) {

        map<int, int> mp;

        for(int i=0; i<nums.size() ; i++){

            mp[nums[i]]++;
        }
        vector<int>ans;
        int k=0;

        for(int i=0; i< mp[0]; i++) nums[k++] = 0;
        for(int i=0; i< mp[1]; i++) nums[k++] = 1;
        for(int i=0; i< mp[2]; i++) nums[k++] = 2;
    }
};