class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map <int,int> check;
        for ( auto x : nums ){
            check[x]++;
        }
        for ( auto y : check ){
            if (y.second >= 2){
            return true;
            }
        }
        return false;
    }
};