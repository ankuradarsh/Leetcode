class Solution {
    public boolean isMonotonic(int[] a) {
        int inc=0, dec=0;
        for(int i=0;i<a.length-1;i++){
            if(a[i+1]>a[i]) inc++;
            else if(a[i+1]<a[i]) dec++;
            if(inc>0 && dec>0) return false;
        }
        return true;
    }
}