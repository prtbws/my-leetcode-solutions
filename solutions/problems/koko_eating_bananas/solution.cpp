int k0(vector<int>& piles,int h, int m){

    long long count = 0;

    for(int i=0; i<piles.size(); i++){
            count += (piles[i]+m-1)/m;
        }
    
    if(count > h) return -1;
    else return 1;
}
int bs(vector<int>& piles, int h){
    int mx = 0;
        for(int i = 0; i<piles.size(); i++){

            if(piles[i]>mx) mx = piles[i];
        }
    int s = 1; 
    int e = mx;
    int ans = mx;

    
    while(s <= e){

        int m = s + (e-s)/2;
        int ch = k0(piles,h,m);

        if(ch==1){
            ans = m;
            e = m-1;
        }
        else s=m+1;

    }
    
    return ans;

}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int ans = bs(piles,h);

        return ans;

    }
};