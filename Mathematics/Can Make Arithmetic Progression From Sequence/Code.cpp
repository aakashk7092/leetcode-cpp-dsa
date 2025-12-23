// aprroach 1 :
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int commonDiff = arr[1] - arr[0];
        for(int i = 1 ; i < arr.size();i++){
            if(arr[i] - arr[i-1] != commonDiff){
                return false;
            }
        }
        return true;
    }
};

//approach 2:
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        int mn = *min_element(arr.begin(), arr.end());
        int mx = *max_element(arr.begin(), arr.end());

        if ((mx - mn) % (n - 1) != 0)
            return false;

        int d = (mx - mn) / (n - 1);
        unordered_set<int> s(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {
            int val = mn + i * d;
            if (s.find(val) == s.end())
                return false;
        }
        return true;
    }
};
