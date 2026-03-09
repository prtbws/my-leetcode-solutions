
class Solution {
public:

    bool poss(vector<int>& bloomDay, int m, int k, int day){

        int count = 0;
        int boq = 0;

        for(int i =0; i< bloomDay.size(); i++){

            if(bloomDay[i] <= day){

                count++;
                if(count == k){
                    boq++;
                    count = 0;
                }


            }
            else count = 0;
        }

        return boq >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        long long need = 1LL * m * k;

        if(need> bloomDay.size()) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans  = -1;
        
        while(low <= high){

            int mid = low + (high-low)/2;

            if(poss(bloomDay, m, k, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }

        return ans;
    }
};