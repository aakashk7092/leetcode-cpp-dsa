class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int res = 0 ;
       int left = 0;
       unordered_map<char,int>mp;
       for(int right = 0 ; right<s.length();right++){
        char ch = s[right];
        if(mp.find(ch) != mp.end() && mp[ch]>=left){
            left = mp[ch]+1;
        }
        mp[ch] = right;
        res = max(res,right-left+1);
       } 
       return res;
    }
};
