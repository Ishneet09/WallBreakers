class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int>x_vector;
        vector<int>y_vector;
        
        while(x > 0){
            x_vector.push_back(x % 2);
            x = x / 2;
        }
        
        while(y > 0){
            y_vector.push_back(y % 2);
            y = y / 2;
        }
        
        int hamming = 0;
        
        int i = 0;
        int x_size = x_vector.size();
        int y_size = y_vector.size();
        
        while(i < x_size && i < y_size){
            if(x_vector[i] != y_vector[i]){
                hamming++;
            }
            i++;
            
        }
        while(i < x_size){
            if(x_vector[i] == 1)
                hamming++;
            i++;
        }
        
        while(i < y_size){
            if(y_vector[i] == 1)
                hamming++;
            i++;
        }
        
        return hamming;
        
    }
};