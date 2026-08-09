class Solution {
public:
    int longestValidParentheses(string s) {
        
        int len=0, max_len =0;
        stack<int> p;

        p.push(-1);

        for(int i=0; i<s.size(); i++){

            if(s[i] == '('){
                p.push(i);
            }else{
                p.pop();
                if(p.empty()){
                    p.push(i);
                }else{
                    max_len = max(max_len, i-p.top());
                }
            }
           
        }
     

        return max_len;
    }
};