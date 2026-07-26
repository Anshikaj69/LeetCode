class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        // can also use bit manipulation i.e if n = (n | 1) to check if lsb is set
        int flag = (n%2==0)?  1: 0 ;

        while(n > 0){

            if(n%2 == flag){
                return false;
            }
            flag = n%2;
            n = n>>1;
        }

        return true;
    }
};