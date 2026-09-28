class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
            st.push(s[i]);
            int n = st.size();
            ans = max(ans,n);           
            }else if(!st.empty() && s[i]==')'){
                st.pop();
            }
        }
        return ans;
    }
};