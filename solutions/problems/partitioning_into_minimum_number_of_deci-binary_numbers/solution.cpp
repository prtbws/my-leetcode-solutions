class Solution {
public:
    int minPartitions(string n) {
        char l = '0';
        for(int i=0; i< n.length(); i++) {
            l = max(l, n[i]);
        }
        return l - '0';
    }
};