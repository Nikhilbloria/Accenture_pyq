class Solution {
public:
    string maskPII(string s) {
        
        // Email
        if (s.find('@') != string::npos) {
            
            int pos = s.find('@');
            
            string name = s.substr(0, pos);
            string domain = s.substr(pos + 1);
            
            for (char &c : name) {
                c = tolower(c);
            }
            
            for (char &c : domain) {
                c = tolower(c);
            }
            
            return string(1, name[0]) + "*****" + 
                   string(1, name[name.length() - 1]) + 
                   "@" + domain;
        }
        
        // Phone number
        string digits = "";
        
        for (char c : s) {
            if (isdigit(c)) {
                digits += c;
            }
        }
        
        int n = digits.length();
        
        string last4 = digits.substr(n - 4);
        
        if (n == 10) {
            return "***-***-" + last4;
        }
        
        int country = n - 10;
        
        string ans = "+";
        
        for (int i = 0; i < country; i++) {
            ans += "*";
        }
        
        ans += "-***-***-" + last4;
        
        return ans;
    }
};