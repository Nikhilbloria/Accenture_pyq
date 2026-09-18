class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n = password.length();
        if(n<8)return false;
        bool upper = false;
        bool lower = false;
        bool digit = false;
        bool special = false;
        string t = "!@#$%^&*()-+";
        for(int i=0;i<n;i++){
            char c = password[i];
            if(c >='a' && c <='z'){
                lower = true;
            }
            if(c>='A'&&c<='Z'){
                upper = true;
            }
            if(c >= '0' && c<='9'){
                digit = true;
            }
            for(char x: t){
                if(c==x) special = true;
            }
            if(i>0 && password[i] == password[i-1]) return false;
        }
        return upper && lower && digit && special;
    }
};