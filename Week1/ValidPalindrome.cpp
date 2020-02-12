class Solution {
public:
    bool isPalindrome(string s) {
        
        stack<char>st;
        int size = s.size();
        string temp = "";
        
        for(int i = 0; i < size; i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                char t = tolower(s[i]);
                temp += t;
                st.push(t);
            }
            else
                continue;
        }
        
       int j = 0; 
       while(st.size() != 0){
            if(st.top() == temp[j]){
                st.pop();
                j++;
            }
                
            else
                return false;
        }
        return true;
        
    }
};