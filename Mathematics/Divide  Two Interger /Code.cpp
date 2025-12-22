class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend ==divisor) return 1;
        if(divisor == 0) return INT_MAX;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        bool sign = (dividend<0)^(divisor<0);
        long long  a = llabs((long long)(dividend));
        long long b = llabs((long long)(divisor));
        long long result = 0;
        while(a>=b){
            int cnt = 0 ;
            while(a >= (b << (cnt + 1))){
                cnt++;
            }
            result+=(1LL<<cnt);
            a-=(b<<cnt);
        }
        if (sign) result = - result;
        if(result >INT_MAX) return INT_MAX;
        if(result < INT_MIN) return INT_MIN;
        return (int)result;
    }
};
