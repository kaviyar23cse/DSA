class Solution {
    public int[] runningSum(int[] nums) {
        int l = nums.length;
        int sum = 0;
        int[] a = new int[l];

        for (int i = 0; i < l; i++) {
            sum = sum + nums[i];
            a[i] = sum;
        }

        return a;
    }
}
