class Solution {
public:
    int pivotInteger(int n) {
        long long total = n*(n+1)/2;
        long long sqr = sqrt(total);
        if(sqr*sqr != total){
            return -1;
        }
        return int(sqr);
    }
};
