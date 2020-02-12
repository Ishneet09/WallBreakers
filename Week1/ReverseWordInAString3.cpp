class Solution {
public:
    string reverseWords(string s) {
        
        if(s == "")
            return "";
        
        int i = 0, j;
        
        for(int k = 0; k < s.size(); k++){
            if(s[k] == ' '){
                j = k - 1;
                
                while(i <= j){
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    i++; j--;
                }
                i = k+1;
            }
        }
        
        j = s.size() - 1;
        while(i <= j){
            char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    i++; j--;
        }
        
        return s;
    }
};