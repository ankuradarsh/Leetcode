class Solution {
    public String intToRoman(int num) {
        int number[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        String roman[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i = 12;
        String str="";
        while(num>0){
            int div = num/number[i];
            num = num%number[i];
            while(div-->0){
                str = str+roman[i];
            }
            i--;
        }
        return str;
    }
}