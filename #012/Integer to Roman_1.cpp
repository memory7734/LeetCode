class Solution {
public:
    string intToRoman(int num) {
        string s;
        stringstream ss;
        ss << num;
        string n = ss.str();
        for (int i = 0; i < n.size(); ++i) {
            s = romanUpper(s);
            switch (n[i]) {
                case '1':
                    s += "I";
                    break;
                case '2':
                    s += "II";
                    break;
                case '3':
                    s += "III";
                    break;
                case '4':
                    s += "IV";
                    break;
                case '5':
                    s += "V";
                    break;
                case '6':
                    s += "VI";
                    break;
                case '7':
                    s += "VII";
                    break;
                case '8':
                    s += "VIII";
                    break;
                case '9':
                    s += "IX";
                    break;
                default:
                    break;
            }
        }
        return s;
    }

    string romanUpper(string &s){
        for (int i = 0; i < s.length(); ++i) {
            switch (s[i]) {
                case 'I':
                    s[i] = 'X';
                    break;
                case 'V':
                    s[i] = 'L';
                    break;
                case 'X':
                    s[i] = 'C';
                    break;
                case 'L':
                    s[i] = 'D';
                    break;
                case 'C':
                    s[i] = 'M';
                    break;
                default:
                    break;
            }
        }
        return s;
    }
};