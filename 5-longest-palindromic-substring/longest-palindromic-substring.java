class Solution {
    public String longestPalindrome(String s) {
        if(s.length()<=1){
            return s;
        }
        int maxLength = 1;
        String maxString = s.substring(0,1);
        for(int i=0;i<s.length();i++){
            for(int j=i+maxLength;j<=s.length();j++){
                if(j-i > maxLength && isPalindrome(s.substring(i,j))){
                    maxLength = j-i;
                    maxString = s.substring(i,j);
                }
            }
        }
        return maxString;
    }

    public boolean isPalindrome(String str){
        int left = 0;
        int right = str.length()-1;
        while(left < right){
            if(str.charAt(left++)!=str.charAt(right--)){
                return false;
            }
        }
        return true;
    }

}