#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;
//check rows cols and boxes
bool check_bs(vector<vector<char>> board){
    for(int k=0;k<9;k+=3){
        for(int l=0;l<9;l+=3){
            unordered_set<char> us;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(board[k+i][l+j]!='.'){
                        if(us.find(board[k+i][l+j])!=us.end())return false;
                        us.insert(board[k+i][l+j]);
                    }
                }   
            }
        }   
    }
    return true;
} 
bool check_cols(vector<vector<char>> board){
    for(int j=0;j<9;j++){
        unordered_set<char> us;
        for(int i=0;i<9;i++){
            if(board[i][j]!='.'){
                if(us.find(board[i][j])!=us.end())return false;
                us.insert(board[i][j]);
            }
        }    
    }
    return true;
}
bool check_rows(vector<vector<char>> board){
    for(int i=0;i<9;i++){
        unordered_set<char> us;
        for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
                if(us.find(board[i][j])!=us.end())return false;
                us.insert(board[i][j]);
            }
        }    
    }
    return true;
}
bool isValidSudoku(vector<vector<char>>& board) {
    return check_rows(board) && check_cols(board) && check_bs(board);
}

int main(){
    vector<vector<char>> v={{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},
                            {'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},
                            {'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    cout<<isValidSudoku(v)<<endl;
    return 0;
}