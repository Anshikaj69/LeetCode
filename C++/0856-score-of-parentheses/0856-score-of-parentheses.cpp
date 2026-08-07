class Solution {
public:
    int scoreOfParentheses(string s) {
        int count=0;
        stack <int> p;

        for(int i=0; i<s.size(); i++){

            if(s[i] == '('){
                p.push(count);
                count = 0;
            }else{
               count = p.top()+ max(2*count, 1);
               p.pop(); 
            }
        }

        return count;
    }
};