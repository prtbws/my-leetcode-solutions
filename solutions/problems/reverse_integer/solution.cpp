class Solution {
public:
    int reverse(int x) {

         if (x == INT_MIN) return 0;

        long long q = abs(x);
        long long ans = 0;

        long long sign = 1;

        if (x<0) sign = -1;

        while(q>0){

            int r = q%10;
            q = q/10;
            
            ans = ans*10 + r;

            if (ans > INT_MAX) return 0;
        }

        return sign*ans;

    }
};