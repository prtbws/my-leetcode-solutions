class Solution {
public:
    string reverseByType(string s) {
        int n = s.length();
        map<int,char>lett;
        map<int,char>nlett;


        int l = 0, nl = 0;
        for (int i = 0; i < n; i++) {
            if(s[i]>= 'a' && s[i] <= 'z'){
                lett[l++] = s[i];
            } else{
                nlett[nl++] = s[i];
            }
        }

        string ans = "";
        l--; 
        nl--;

        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                ans += lett[l--];
            } else {
                ans += nlett[nl--];
            }
        }

        return ans;
    }
};
