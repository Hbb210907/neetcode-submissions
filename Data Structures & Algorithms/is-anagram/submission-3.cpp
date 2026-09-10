class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map <char,int> letter_check;
        for ( auto x : s){
            letter_check[x]++;
        }
        for ( auto y : t){
            if (letter_check.count(y)){
                letter_check[y]--;
            }
        }
       for ( auto z : letter_check ){
        if ( z.second != 0 ) return false;
       }
        return true;
    }
};
