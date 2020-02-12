class Solution {
public:
    
    void reverse(vector<int>& v){
        int size = v.size();
        
        int i = 0, j = size - 1;
        
        while(i <= j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;j--;
        }
        return;
    }
    
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        int rows = A.size();
        if(rows == 0)
            return {{}};
        int cols = A[0].size();
        
        for(int i = 0; i < rows; i++){
            reverse(A[i]);
        }
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                
                if(A[i][j] == 0)
                    A[i][j] = 1;
               
                else if(A[i][j] == 1)
                    A[i][j] = 0;
            }
        }
        return A;
        
    }
};