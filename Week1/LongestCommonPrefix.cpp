class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s = strs.size();
        
        if(s == 0)
            return "";
        
        string prefix = strs[0];
        
        
        for(int i = 1; i < s; i++){
            
            string current = strs[i];
            int j = 0;
            string temp = "";
            
            while(j < min(prefix.size(), current.size())){
                if(prefix[j] == current[j]){
                    temp += current[j];
                }
                else{
                    break;
                }
              j++;   
            }
            
           prefix = temp;
        }
       
        
        return prefix;
    }
};