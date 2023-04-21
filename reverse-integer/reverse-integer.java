class Solution {
    public int reverse(int x) {
        long num=0;
        while(x!=0){
            int n = x % 10;
            num = num*10+n;
            x = x/10;
        }
        if(num>Math.pow(2, 31)-1 || num<-(Math.pow(2, 31))){
            return 0;
        } else return (int)num;
    }
}