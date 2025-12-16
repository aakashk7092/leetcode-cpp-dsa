class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0) return 0 ;
        sort(nums.begin(),nums.end());
        int count = 0 ;
        int maximum = 1 ;
        int lastSmaller= INT_MIN;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]-1== lastSmaller){
                count++;
                lastSmaller=nums[i];

            }
            else if(nums[i] != lastSmaller){
                count = 1;
                lastSmaller = nums[i];
            }
            maximum=max(maximum , count);
        }
        return maximum;
        
    }
};
