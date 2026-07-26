class Solution {
public:
    int hammingWeight(int n) {
        
        int d = floor(log2(n)) + 1 ;
        int hm=0;

        for(int i=0; i<d; i++){
            if( (n & 1<< i) != 0 ){
                hm++;
            }
        }

        return hm;
    }
};