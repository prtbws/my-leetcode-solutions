class Solution {
public:

    int binn(vector<int>& arr){
        int s = 1;
        int e = arr.size()-2;

        int m = s+(e-s)/2;

        while(s<=e){
            if((arr[m] > arr[m+1]) && (arr[m] > arr[m-1])){
                return m;
            }
            else if((arr[m] < arr[m+1]) && (arr[m] > arr[m-1])){
                s = m+1;
            }
            else if((arr[m] > arr[m+1]) && (arr[m] < arr[m-1])){
                e = m-1;
            }
            m = s+(e-s)/2;
        }
        return -1;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return binn(arr);
    }
};