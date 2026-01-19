class Solution {
    public int[] replaceElements(int[] arr) {
        int[] a=new int[arr.length];
        int max=-1;
        for(int i=0;i<arr.length;i++){
            max=-1;
            for(int j=i+1;j<arr.length;j++){
                max=Math.max(max,arr[j]);
               
            }
            a[i]=max;
        }
        return a;
        
    }
}