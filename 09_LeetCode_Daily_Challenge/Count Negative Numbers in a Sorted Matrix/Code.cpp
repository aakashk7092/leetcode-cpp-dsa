class Solution {
public:
    int countNegatives(vector<int>&arr){
        int low = 0 , high = arr.size()-1;
        int count = 0;
        int firstNegative = arr.size();
        while(low <= high){
            int mid = low+(high-low)/2;
            if(arr[mid] <0){
                firstNegative = mid;
                high = mid -1;
            }else{
                low = mid+1;
            }
        }
        return arr.size()-firstNegative;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(vector<int>num:grid){
            ans +=countNegatives(num);
        }
        return ans;
    }
};
