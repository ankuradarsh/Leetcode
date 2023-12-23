class Solution {
    public boolean isValidSudoku(char[][] board) {
        int len = board[0].length;
        for(int i=0;i<len;i++){
            boolean row[] = new boolean[len];
            boolean column[] = new boolean[len];
            boolean box[] = new boolean[len];
            for(int j=0;j<len;j++){
                
                if(board[i][j] == '.'){}
                else if(row[board[i][j] - '1']) return false;
                else row[board[i][j] - '1'] = true;

                if(board[j][i] == '.'){}
                else if(column[board[j][i] - '1']) return false;
                else column[board[j][i] - '1'] = true;

                int m = i/3*3 + j/3;
                int n = i%3*3 + j%3;
                if(board[m][n] == '.'){}
                else if(box[board[m][n] - '1']) return false;
                else box[board[m][n]-'1'] = true;
            }
        }
        return true;
    }
}