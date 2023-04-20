class Solution {
    public int search(int[] a, int target) {
        // int start=0, end=a.length-1;
        // reverse(a, 0, end);

        for(int i=0;i<a.length;i++){
            if(target == a[i]) return i;
        }
        return -1;
    }
    // public void reverse(int a[], int start, int end){
    //     while(start < end){
    //         int temp = a[start];
    //         a[start] = a[end];
    //         a[end] = temp;
    //         start++;
    //         end--;
    //     }
    // }
}