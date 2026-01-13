class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;
        
        int s1[26]={0}, t1[26]= {0};

        for(int i=0; i<s.size(); i++){
            s1[s[i]-'a']++;
            t1[t[i]-'a']++;
        }
        for(int i=0 ;i<26; i++){
            if(s1[i]!=t1[i]) return false;
        }
        return true;
    }
};