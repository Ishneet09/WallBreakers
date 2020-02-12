class Solution {
public:
    
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        
        return false;
    }
    
    string reverseVowels(string s) {
        int size = s.size();
        if(size == 0)
            return "";
        
        int i = 0, j = size - 1;
        
        while(i <= j){
            if(isVowel(s[i]) && isVowel(s[j])){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;j--;
            }
            else if(!isVowel(s[i]))
                i++;
            else if(!isVowel(s[j]))
                j--;
        }
        return s;
        
    }
};