public class Solution {
    public String reverseString(String s) {
        String reversed = "";
        if(s.length()<=0)
            return reversed;
        char[] array=s.toCharArray();
        int left=0;
        int right=s.length()-1;
        while(left<right){
            char tmp=array[left];
            array[left]=array[right];
            array[right]=tmp;
            left++;
            right--;
        }
        return new String(array,0,array.length);
    }
}
