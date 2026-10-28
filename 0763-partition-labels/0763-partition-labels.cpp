class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int>list(26,0);
        for(int i=0;i<n;i++){
            list[s[i]-'a']=i;
        }
        vector<int>ans;
        int start =0;
        int end = 0;
        for(int i=0;i<n;i++){
            end = max(end,list[s[i]-'a']);
            if(i==end){
                ans.push_back(end-start+1);
                start = i+1;
            }
        }
        return ans;
    }
};