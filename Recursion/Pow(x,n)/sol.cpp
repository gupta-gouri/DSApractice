class Solution {
public:
    double power(double x, long long n){

        // Base case: if exponent if 0, then ans = 1
        if (n == 0) return 1.0;
        
        // Base case: if exponent if 1, then ans = x
        if (n == 1) return x;

        // Recursive case: compute power for exponent n/2
        double half = power(x, n/2);

        if(n % 2 == 1){
            return x * half * half;
        }
        else{
            return half * half;
        }
    }
    double myPow(double x, int n) {
        long long exp = n; // converted int n to long long to avoid stack overflow for INT_MIN

        // if exponent is negative then take reciprocal and make exponent positive
        if(exp < 0){
            x = 1 / x;
            exp = -exp;
        }
        return power(x, exp);
    }
};