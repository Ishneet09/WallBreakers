class Solution {
public:
    
   void dfs(vector<vector<int>>&M, bool*visited, int sv, int vertices){
       visited[sv] = true;
       
       for(int i = 0; i < vertices; i++){
           if(!visited[i] && M[sv][i] == 1)
               dfs(M, visited, i, vertices);
       }
       return;
   }
    
    
    int findCircleNum(vector<vector<int>>& M) {
       
        int vertices = M.size();
        if(vertices == 0)
            return 0;
        
        //int cols = M[0].size();
        
        int friendCircles = 0;
        
        bool*visited = new bool[vertices];
        
        for(int i = 0; i < vertices; i++){
            visited[i] = false;
        }
        
       for(int i = 0; i < vertices; i++){
           if(!visited[i]){
               friendCircles++;
               dfs(M, visited, i, vertices);
           }
       }
        
        return friendCircles;
    }
};