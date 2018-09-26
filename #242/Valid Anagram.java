class Solution {
    public boolean isAnagram(String s, String t) {
        int[] tab = new int[26];
        for(char c:s.toCharArray()) {
            tab[c-'a'] += 1; 
        }
        for(char c:t.toCharArray()) {
            tab[c-'a'] -= 1; 
        }
        for(int i:tab){
            if(i!=0) return false;
        }
        return true;
    }
}