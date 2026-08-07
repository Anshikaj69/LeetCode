class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<char> p;
        int count=0;

        for( int i=0; i<s.size(); i++ ){

            if(s[i] == '('){
                p.push(s[i]);
            }else{
                if(p.empty()){
                    count++;
                }else{
                    p.pop();
                }
            }
        }

        return count + p.size();
    }
};