class Solution {
public:
    
    bool isSelfDividing(int n){
        int temp = n;
        
        while(n > 0){
            int lastDigit = n % 10;
            
            if(lastDigit != 0 && temp % lastDigit == 0)
                n = n / 10;
            else
                return false;
        }
        return true;
    }
    
    
    vector<int> selfDividingNumbers(int left, int right) {
     
        vector<int>v;
        
        for(int i = left; i <= right; i++){
            if(i % 10 == 0)
                continue;
            else{
                if(isSelfDividing(i))
                    v.push_back(i);
            }
        }
        return v;
    }
};