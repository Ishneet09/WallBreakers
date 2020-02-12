class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int rows = A.size();
        if(rows == 0)
            return {{}};
       
        int cols = A[0].size();
        
        vector<vector<int>> B;
        for(int i = 0; i < cols; i++){
            vector<int>temp;
            B.push_back(temp);
        }
        
        for(int p = 0; p < cols; p++){
            for(int q = 0; q < rows; q++){
                B[p].push_back(A[q][p]);
            }
        }
        return B;
    }
};