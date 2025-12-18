class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int>temp(m+n);
        int i  = 0 ;
        int j = 0 ;
        int k = 0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                temp[k++]=nums1[i++];
            }
            else{
                temp[k++] = nums2[j++];
            }
        }
        while(i<m){
            temp[k++] = nums1[i++];
        }
        while(j<n){
            temp[k++] = nums2[j++];
        }
        int s = temp.size();
        if(temp.size()%2 == 1){
            return temp[s/2];
        }
        if(temp.size() %2 == 0){
            return (temp[s/2]+temp[s/2-1])/2.0;
        }
        return 0.0;
    }
};
