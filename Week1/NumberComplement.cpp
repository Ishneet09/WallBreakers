class Solution {
public:
    int findComplement(int num) {
        
        vector<int>v;
        
        if(num == 0)
            return 1;
        
        
        while(num > 0){
            v.push_back(num % 2);
            num = num / 2;
        }
        
        int size = v.size();
        
        for(int i = 0; i < size; i++){
            if(v[i] == 1)
                v[i] = 0;
            else if(v[i] == 0)
                v[i] = 1;
        }
        
        int complement = 0;
        
        for(int i = 0; i < size; i++){
            if(v[i] == 1)
                complement += pow(2,i);
        }
        return complement;
        
    }
};