class Solution {
public:
    double myPow(double x, int n) {

        if(n == INT_MIN){
            x = 1/x;

            return x* myPow(x, INT_MAX);
        }
        
        x = (n<0)? (double)1/x: x;
        n = abs(n);

        if(n==0) return 1;
        if(n <= 1)return x;

        double ans = myPow(x, n/2);

        return (n % 2 == 0) ? (ans*ans) : (ans*ans*x) ;

    }
};