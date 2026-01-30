class Solution {
public:
    bool isPalindrome(string s) {
        
        for (int i = 0; i < s.length(); ) {

            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = tolower(s[i]);
                i++;   
            }
            else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                i++;
            }   
            else {
                s.erase(i, 1);
            }
        }

        int f = 0;
        int l = s.length()-1;

        while(f < l){

            if(s[f] == s[l]){
                f++;
                l--;
            }
            else return false;
        }
        return true;

    }
};