class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums){
        int n = nums.size();
        vector <int> store( 2 * n);
        for ( int i = 0; i < n; i++){
            store[i] = nums[i];
            store[i + n] = nums[i];
        }
        return store;
    }
};