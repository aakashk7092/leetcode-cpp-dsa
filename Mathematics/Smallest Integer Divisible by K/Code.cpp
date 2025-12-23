class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int num = 1 , len = 1;
        if(k==1) return 1;
        while(len<=k && num != 0){
            num = (num*10+1)%k;
            len++;
        }
        if(len>k) return -1;
        return len;
    }
};
