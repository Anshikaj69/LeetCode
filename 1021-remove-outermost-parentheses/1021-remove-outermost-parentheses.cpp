class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int level = 0;
        for(char c : s){
            if (c == '('){
                level++;
                if(level > 1){
                    res += '(';
                }
            }else{
                level--;
                if (level > 0 ){
                    res+= ')';
                }
            }
        }

        return res;
    }
};