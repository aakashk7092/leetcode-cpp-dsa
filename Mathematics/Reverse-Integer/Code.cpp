class Solution {
public:
    int reverse(int x) {
        long long reverseNum = 0 ; 
        while(x!=0){
            int dig = x%10;
            if(reverseNum>INT_MAX/10 || reverseNum<INT_MIN/10){
                return 0;
            }
            reverseNum= reverseNum*10 + dig;
            x = x/10;
        }
        return reverseNum;
        
    }
};
