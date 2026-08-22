class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int digitsum = 0;
        int digitproduct= 1;
        
        while(n>0){
            int digit = n%10;
            digitsum += digit;
            digitproduct *= digit;
            n/=10;
        }
        int divisor = digitsum + digitproduct;
        return original % divisor == 0;
    }
};