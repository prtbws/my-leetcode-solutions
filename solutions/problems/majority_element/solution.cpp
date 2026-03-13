class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int>mp;

        for(int i=0; i< nums.size(); i++){

            mp[nums[i]]++;


        }

       

        int ans = 0;
        int mx =  0;

        for(auto i : mp){

            if(i.second > mx){
                mx = i.second;    
                ans = i.first;
            }
        }

        return ans;
    }
};