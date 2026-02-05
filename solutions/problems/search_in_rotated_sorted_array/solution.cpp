class Solution {
public:

    int findpivot(vector<int> arr){


        int s = 0;
        int e = arr.size()-1;
        int m = s + (e-s)/2;

        while(s < e){
            if(arr[m] >= arr[0]){
                s = m+1;
            }
            else{
                e = m;
            }
            m = s + (e-s)/2;  
        }
        return s;
    }

    int rsearch(vector<int>arr,int key){

        int piv = findpivot(arr);
        int s,e,m;


        if(key >= arr[piv] && key <= arr[arr.size()-1]){ 
            s = piv;
            e = arr.size()-1;
        }
        else{
            s = 0;
            e = piv-1;
        }

        m = s + (e-s)/2;

        while(s<=e){

            if(arr[m]==key) return m;
            else if(arr[m]>key) e = m-1;
            else s = m+1;

            m = s + (e-s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {

        return rsearch(nums, target);
    }
};