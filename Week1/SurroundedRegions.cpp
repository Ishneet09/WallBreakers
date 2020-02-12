class my_class{
public:
    int row_value;
    int col_value;
    
    my_class(int i, int j){
        row_value = i;
        col_value = j;
    }
};


class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
        vector<my_class> v;
        int rows = board.size();
        if(rows == 0)
            return;
        int cols = board[0].size();
        
         if(rows == 1 && cols == 1 && board[0][0] == 'O')
            return;
        
        for(int i = 0; i < cols; i++){
            if(board[0][i] == 'O'){
                my_class p(0,i);
                v.push_back(p);
                board[0][i] = '*';
            }
        }
        
        for(int i = 0; i < cols; i++){
            if(board[rows - 1][i] == 'O'){
                my_class p(rows-1, i);
                v.push_back(p);
                board[rows-1][i] = '*';
                
            }
        }
        
        for(int i = 0; i < rows; i++){
            if(board[i][0] == 'O'){
                my_class p(i, 0);
                v.push_back(p);
                board[i][0] = '*';
            }
        }
        
        for(int i = 0; i < rows; i++){
            if(board[i][cols-1] == 'O'){
                my_class p(i, cols-1);
                v.push_back(p);
                board[i][cols-1] = '*';
            }
        }
        
        int size = v.size();
        for(int i = 0; i < size; i++){
            my_class current = v[i];
            int z_row = v[i].row_value;
            int z_col = v[i].col_value;
            
            if(z_row == 0){
                if(board[z_row+1][z_col] == 'O')
                    board[z_row + 1][z_col] = '*';
            }
            
            
           else if(z_row == rows - 1){
                if(board[z_row - 1][z_col] == 'O')
                    board[z_row - 1][z_col] = '*';
            }
            
           
            if(z_col == 0){
                if(board[z_row][z_col+1] == 'O')
                    board[z_row][z_col+1] = '*';
            }
            
            else if(z_col == cols - 1){
                if(board[z_row][z_col-1] == 'O')
                    board[z_row][z_col-1] = '*';
            }
            
            
            
        }
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                else
                    continue;
            }
        }
        
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(board[i][j] == '*')
                    board[i][j] = 'O';
             
            }
        } 
        
        
    }
};