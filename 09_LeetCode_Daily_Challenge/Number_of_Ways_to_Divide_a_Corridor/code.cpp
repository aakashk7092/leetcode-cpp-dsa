class Solution {
public:
    long long MOD = 1e9+7;
    int numberOfWays(string corridor) {
        vector<int>posP;
        int n  = corridor.length();
        for(int i = 0 ;i <n;i++){
            if(corridor[i] =='S'){
                posP.push_back(i);
            }
        }
        if(posP.size()%2 !=0 || posP.size()==0) return 0;
        long long result = 1;
        int prevIdx = posP[1];
        for(int j = 2;j<posP.size();j+=2){
            int l = posP[j]-prevIdx;
            result = (result*l)%MOD;
            prevIdx = posP[j+1];
        }
        return int(result);
    }
};
