// https://leetcode.com/problems/sudoku-solver/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isValid(vector<vector<int>> board, int r, int c, int val)
    {

        // check row
        for(int j = 0; j < board[0].size(); j++){
            if(board[r][j] == val){
                return false;
            }
        }

        // check col
        for(int i = 0; i < board.size(); i++){
            if(board[i][c] == val){
                return false;
            }
        }

        // 3*3 check

        int x = r/3 * 3;
        int y = c/3 *3;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(board[i+x][j+c] == val){
                    return false;
                }
            }
        }

        return true;
    }


    void display(vector<vector<int>> board)
    {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    void solve(vector<vector<int>> &board, int i, int j)
    {
        cout << i << " " << j << endl;
        // base case
        if(i == board.size()){

            cout << "1111111111111111111111\n";
            display(board);
        }

        // row & col
        int ni = 0, nj = 0;
        if(j == board[0].size()-1){
            ni = i+1;
            nj = 0;
        }
        else{
            ni = i;
            nj = j+1;
        }

        if(board[i][j] != 0){
            solve(board, ni, nj);
        }
        else{
            for(int po = 1; po <= 9; po++){
                if(isValid(board, i, j, po)){
                    board[i][j] = (po);
                    solve(board, ni, nj);
                    board[i][j] = 0;
                }
            }
        }
    }
    void solveSudoku(vector<vector<int>>& board) {
        
        solve(board, 0, 0);
    }
};


 bool isValid(vector<vector<int>> board, int r, int c, int val)
    {

        // check row
        for(int j = 0; j < board[0].size(); j++){
            if(board[r][j] == val){
                return false;
            }
        }

        // check col
        for(int i = 0; i < board.size(); i++){
            if(board[i][c] == val){
                return false;
            }
        }

        // 3*3 check

        int x = r/3 * 3;
        int y = c/3 *3;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(board[i+x][j+c] == val){
                    return false;
                }
            }
        }

        return true;
    }
void disply(vector<vector<int>> board)
{
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size(); j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}


void solveSudoko(vector<vector<int>> &board, int i, int j)
{
    cout << board.size() << " " << i << " " << j << endl;
    disply(board);
    cout << "\n\n";
   
    
    

    // 
    int ni = 0, nj = 0;
    if(j == board[0].size()-1){
        ni = i+1, nj = 0;
    }
    else{
        ni = i;
        nj = j+1;
    }

    cout << ni << " " << nj << endl;


    if(board[i][j] != 0){
        solveSudoko(board, ni, nj);
    }
    else{
        for(int po = 1; po <= 9; po++){
            if(isValid(board, i, j, po)){
                board[i][j] = po;
                solveSudoko(board, ni, nj);
                board[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> board;

    for(int i = 0; i < 9; i++){
        vector<int> v;

        for(int j = 0; j < 9; j++){
            int ch; cin>>ch;
            v.push_back(ch);
        }

        board.push_back(v);
    }

    solveSudoko(board, 0, 0);
    
}