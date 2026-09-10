class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> seq;
        int longest = 0;
        for ( int i = 0; i < nums.size(); i++){
            seq.insert(nums[i]);
        }
        for (  int j = 0; j < nums.size(); j++){
            int length = 0;
            if (seq.count(nums[j] - 1) == 0){
                length = 1;
                while ( seq.count(nums[j] + length) == 1){
                    length++;
                }
            }
            longest = max(longest,length);
        }
        return longest;        
    }
};
