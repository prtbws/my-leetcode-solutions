class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        
        int n = nums.length;
        int [] result = new int[n];

        int i= 0;

        for(int nu : nums) if (nu < pivot) result[i++] = nu;
        for(int nu : nums) if (nu == pivot) result[i++] = nu;
        for(int nu : nums) if (nu > pivot) result[i++] = nu;

        return result;
    }
    
}