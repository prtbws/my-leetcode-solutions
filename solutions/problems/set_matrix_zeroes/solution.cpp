class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        unordered_set<int>zr,zc;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j< matrix[0].size(); j++){

                if(matrix[i][j] == 0) {
                    zr.insert(i);
                    zc.insert(j);
                }
            }
        }
         for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (zr.count(i) || zc.count(j)) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};