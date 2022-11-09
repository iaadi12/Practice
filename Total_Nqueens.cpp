class Solution {
public:
  void solve(
    int col,vector<string>&board,vector<int>&leftRow, 
             vector<int>& upperBound, vector<int>&lowerBound, int n,int &count)
  {
    // int count=0;
    if(col==n)
    {
      // ans.push_back(board);
      count++;
      return;
    }
    for(int row=0;row<n;row++)
    {
      if(leftRow[row]==0 && lowerBound[row+col]==0 && upperBound[n-1+ col-row]==0)
      {
        board[row][col]='Q';
        leftRow[row]=1;
        lowerBound[row+col]=1;
        upperBound[n-1 + col-row]=1;
        solve(col+1,board,leftRow,upperBound,lowerBound,n,count);
        board[row][col]='.';
        leftRow[row]=0;
        lowerBound[row+col]=0;
        upperBound[n-1 + col-row]=0;
      }
    }
  }
public:
    int totalNQueens(int n) {
      vector<string>board(n);
      string s(n,'.');
      for(int i=0;i<n;i++)
      {
        board[i]=s;
      }
      vector<int>leftRow(n,0);vector<int>upperBound(2*n-1,0);vector<int>lowerBound(2*n-1,0);
      int count=0;
      solve(0,board,leftRow,upperBound,lowerBound,n,count);
      return count;
    }
};
    
