class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> group_by;
        for ( int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            string label = s;
            group_by[label].push_back(strs[i]);
        }
        vector <vector<string>> result;
            for ( auto x : group_by ){
                result.push_back(x.second);
            }
            return result;
    }
};
