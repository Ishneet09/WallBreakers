class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int>ans;
        
        int size = A.size();
        
        for(int i = 0; i < size; i++){
            if(A[i] % 2 == 0){
                ans.push_back(A[i]);
                A[i] = -1;
            }
        }
        
        for(int i = 0; i < size; i++){
            if(A[i] == -1)
                continue;
            else
                ans.push_back(A[i]);
        }
        return ans;
    }
};