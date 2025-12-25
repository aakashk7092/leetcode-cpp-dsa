class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long ans = 0;
        for(int i = 0 ;i <k ;i++){
            int reducedValue = happiness[i] - i;
            if(reducedValue>0){
                ans += reducedValue;
            }
        }
        return ans;
    }
};
