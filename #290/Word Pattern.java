class Solution {
    public boolean wordPattern(String pattern, String str) {
        HashMap<Character,String> map = new HashMap<>();
        String[] arr = str.split(" ");
        if(pattern.length() != arr.length){
            return false;
        }
        for(int i = 0;i < pattern.length();i++){
            char key = pattern.charAt(i);
            String value = arr[i];
            if(map.containsKey(key)){
                if(!map.get(key).equals(value)){
                    return false;
                }
            }else{
                if(map.containsValue(value)){
                    return false;
                }
            }
            map.put(key,value);
        }
        return true;
    }
}