class Solution {
    public String decodeString(String s) {
        if (s == null || s.length() == 0) return s;
        
        Stack<Integer> cntSt = new Stack<>();
        Stack<String> st = new Stack<>();
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            
            if (c == '[') {
                st.push("[");
            } else if (c == ']') {
                int cnt = cntSt.pop();
                String str = st.pop();
                while (st.peek() != "[") {
                    str = st.pop() + str;
                }
                st.pop();
                StringBuilder sb = new StringBuilder();
                while (cnt > 0) {
                    sb.append(str);
                    cnt--;
                }
                st.push(sb.toString());
            } else if (Character.isLetter(c)) {
                int j = i;
                while (j + 1 < s.length() && Character.isLetter(s.charAt(j + 1))) j++;
                st.push(s.substring(i, j + 1));
                i = j;
            } else if (Character.isDigit(c)) {
                int j = i;
                while (j + 1 < s.length() && Character.isDigit(s.charAt(j + 1))) j++;
                cntSt.push(Integer.parseInt(s.substring(i, j + 1)));
                i = j;
            }
        }
        StringBuilder res = new StringBuilder();
        while (!st.isEmpty()) {
            res.insert(0, st.pop());
        }
        return res.toString();
    }
}