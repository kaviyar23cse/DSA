class Solution {
    public int reverse(int x) {
        long res=0,sum=0;
        while(x!=0){
            res=x%10;
            sum=(sum*10)+res;
            x=x/10;
        }
        if(sum>=-Math.pow(2,31)&& sum<Math.pow(2,31)){
            return (int)sum;
        }
        return 0;
    }
}