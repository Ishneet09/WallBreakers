class Solution {
public:
    bool isAnagram(string s, string t) {
       
        if(s == "" && t == "")
            return true;
        
        if(s == "" || t == "")
            return false;
        
        
        
        unordered_map<char, int>m;
        
        for(int i = 0; i < s.size(); i++){
            if(m.count(s[i]) == 0){
                m[s[i]] = 1;
            }
            else
                m[s[i]]++;
        }
            
        for(int j = 0; j < t.size(); j++){
            if(m.count(t[j]) > 0){
                m[t[j]]--;
            }
            
            else
                return false;
        }
            
        for(int k = 0; k < s.size(); k++){
            if(m[s[k]] == 0)
                continue;
            else
                return false;
        }
            return true;
    }
};