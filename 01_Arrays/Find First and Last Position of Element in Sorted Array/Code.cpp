class Solution {
private:
    int leftRange(vector<int>& nums, int target){
        int start = 0 ; 
        int end = nums.size()-1;
        int result = -1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                result= mid;
                end = mid-1;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return result;
    }
    int secondRange(vector<int>& nums, int target){
        int start = 0 ; 
        int end = nums.size()-1;
        int result = -1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                result= mid;
                start = mid+1;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return result;
    }
        
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = leftRange(nums,target);
        int right = secondRange(nums,target);
        return{left , right};
        
    }
};
