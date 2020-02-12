class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1)
            return true;
        if(n % 2 != 0)
            return false;
        
        while(n > 1){
            n = n / 2;
            if(n % 2 != 0)
                break;
        }
        if(n == 1)
            return true;
        
        return false;
        
    }
};