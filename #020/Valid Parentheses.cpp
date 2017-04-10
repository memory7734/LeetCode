class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); ++i) {
            if (isLeft(s[i]) || st.empty()) {
                st.push(s[i]);
            } else if (isPar(st.top(), s[i])) {
                st.pop();
            } else {
                return false;
            }
        }
        return st.empty();
    }

    bool isLeft(char c){
        if (c == '(' || c == '[' || c == '{') {
            return true;
        }
        return false;
    }

    bool isPar(char a, char b){
        if ((a == '(' && b == ')') || a == '[' && b == ']' || a == '{' && b == '}') return true;
        return false;
    }
};