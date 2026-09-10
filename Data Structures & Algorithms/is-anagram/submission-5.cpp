class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> letter;
        if ( s.size() != t.size() ) return false;
        for ( auto x : s){
            letter[x]++;
        }
        for ( auto y : t){
            letter[y]--;
            if (letter[y] == 0) letter.erase(y);        
            }
            if (letter.empty()) return true;
            else return false;
    }
};
