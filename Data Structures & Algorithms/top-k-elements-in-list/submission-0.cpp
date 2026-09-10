class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> store;
        vector<pair<int,int>> couple;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++){
          store[nums[i]]++;
        }
        for (auto x : store){
          couple.push_back(x);
        }
        sort(couple.begin(), couple.end(), [](pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
});
        for ( int i = 0; i < k; i++){
          result.push_back(couple[i].first);
        }
        return result;

    }
};
