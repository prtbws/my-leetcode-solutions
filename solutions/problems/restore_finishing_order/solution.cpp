class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>&       friends) {
        int no = order.size();
        int nf = friends.size();
        vector<int>ans;
        for(int i=0; i<no; i++){
            for(int j=0; j<nf; j++){
                if(order[i]==friends[j]){
                    ans.push_back(order[i]);
                    break;
                }
            }
            
        }
        return ans;
    }
};