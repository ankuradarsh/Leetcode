class Solution {
    public int reverse(int x) {
        long n=x;
        long num=0;
        // if(x<0){
        //     n = Math.abs(n);
        // }
        while(n!=0){
            long mod = n%10;
            num = num*10+mod;
            n = n/10;
        }
        // if(x<0){
        //     num = -1*num;
        // }

        if(num>Math.pow(2,31)-1 || num<-(Math.pow(2,31))) return 0;
        else return (int)num;
    }
}