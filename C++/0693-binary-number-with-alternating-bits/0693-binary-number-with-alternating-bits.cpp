class Solution {
public:
    bool hasAlternatingBits(int n) {
        

        int flag = (n%2==0)?  1: 0 ;

        while(n > 0){
            cout<< "flag: " << flag << "num : " << n;
            if(n%2 == flag){
                return false;
            }
            flag = n%2;
            n = n>>1;
        }

        return true;
    }
};