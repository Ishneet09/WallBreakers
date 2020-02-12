class Solution {
public:
    
    bool areRemainingLowerCase(string word){
        for(int i = 1; i < word.size(); i++){
            if(islower(word[i]))
                continue;
            else
                return false;
        }
        return true;
    }
    
    
    bool areRemainingCaps(string word){
        for(int i = 0; i < word.size(); i++){
            if(isupper(word[i]))
                continue;
            else
                return false;
        }
        return true;
    }
    
   
    bool detectCapitalUse(string word) {
        
        int size = word.size();
        
        if(islower(word[0])){
            return areRemainingLowerCase(word);
        }
       
        return areRemainingLowerCase(word) || areRemainingCaps(word);
        
    }
};