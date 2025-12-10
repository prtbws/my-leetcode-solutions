class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
      int countodd=0, counteven=0;
      int n=nums.size();
      for (int i=0; i<n; i++){
       if(nums[i]%2==0){
        counteven++;
       }
       else countodd++; 
      }
      for (int i=0; i<counteven; i++){
        nums[i]=0;
      } 
      for (int i=counteven; i<counteven+countodd; i++){
        nums[i]=1;
      }
      return nums; 
    }
};