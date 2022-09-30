Solution 1-->
  
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size();i++)
        {
            for(int j=0; j< matrix[0].size();j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;
    }
};

Solution 2-->
  class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row=0,col=matrix[0].size()-1;
        while(row<matrix.size() && col>=0)
        {
            if(matrix[row][col]>target)
                col--;
            else if(matrix[row][col]<target)
                row++;
            else if(matrix[row][col]==target)
                return true;
        }
        return false;
    }
};
