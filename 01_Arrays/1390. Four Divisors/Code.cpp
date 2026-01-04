class Solution {
public:
    int isFourDivisors(int num){
        int divisors = 0;
        int sum = 0 ;
        for(int div = 1 ; div <= sqrt(num);div++){
            if(num % div == 0){
                int otherDiv = num/div;
                if(div == otherDiv){
                    divisors += 1;
                    sum += div;
                }else{
                    divisors += 2;
                    sum += (div+otherDiv);
                }
            }
            if(divisors > 4){
                return 0;
            }
        }
        return divisors == 4 ? sum : 0;
    }    
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for(int num :nums){
            ans += isFourDivisors(num);
        }
        return ans;
    }
};
