class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c){ 
        vector<int>temp;
        int count=0;
        vector<vector<int>> ans(r,vector<int>(c));
        int m = mat.size();
        int n = mat[0].size();
        int total=m*n;
        int total2=r*c;
        for(int i = 0;i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                temp.emplace_back(mat[i][j]);
            }
        }
        if(total != total2)
                return mat;
        else{
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    ans[i][j] = temp[count++];
             }
        }
      }
        return ans;
    }
};
