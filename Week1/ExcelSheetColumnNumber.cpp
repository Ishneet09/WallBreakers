class Solution {
public:
    int titleToNumber(string s) {
        unordered_map<char, int>m = {{'A', 1}, {'B', 2}, {'C', 3}, {'D', 4}, {'E', 5}, {'F', 6}, {'G', 7}, {'H', 8}, {'I', 9}, {'J', 10}, {'K', 11}, {'L', 12}, {'M', 13}, {'N', 14}, {'O', 15}, {'P', 16}, {'Q', 17}, {'R', 18}, {'S', 19}, {'T', 20}, {'U', 21}, {'V', 22}, {'W', 23}, {'X', 24}, {'Y', 25}, {'Z', 26}};
        
        int size = s.size();
        
        if(size == 1)
            return m[s[0]];
        
        int countOf26 = size - 1;
        int r = pow(26, countOf26) * m[s[0]];
        
        for(int i = 1; i < size - 1; i++){
            r += (pow(26, size-i-1) * m[s[i]]);
        }
        
        r = r + m[s[size - 1]];
        
        return r;
    }
};