class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp=strs[0];
        
        for(string s : strs){
            int i =0;
            while(i< lcp.length() &&  s[i] == lcp[i]){
                i++;
            }
            lcp = s.substr(0, i);
        }
        return lcp;
    }
};