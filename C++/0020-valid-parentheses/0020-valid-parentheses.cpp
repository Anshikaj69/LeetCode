class Solution {
public:
    bool isValid(string s) {
        
        stack<int> p;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                p.push(s[i]);
            }

            if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(p.empty()){
                    return false;
                }

                if( ( s[i] == ')' && p.top() == '(' ) || ( s[i] == ']' && p.top() == '[' ) || ( s[i] == '}' && p.top() == '{' ) ){
                    p.pop();
                }else{
                    return false;
                }
            }
        }

        return (p.empty())? true : false;

    }
};