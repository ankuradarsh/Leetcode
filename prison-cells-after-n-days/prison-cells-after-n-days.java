class Solution {
    public int[] prisonAfterNDays(int[] arr, int n) {
        n = (n-1)%14+1;
        while(n-->0){
            int arr1[] = new int[arr.length];
            for(int j=1;j<7;j++){
                if(arr[j-1] == arr[j+1]) arr1[j] = 1;


                else arr1[j] = 0;
            }
            arr = arr1;
        }
        return arr;
    }
}