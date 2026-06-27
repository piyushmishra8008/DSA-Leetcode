class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int m=matrix.size();
       int n=matrix[0].size();
        vector<vector<int>>arr=matrix;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                for(int k=0;k<m;k++){
                    arr[k][j]=0;
                }
                for(int l=0;l<n;l++){
                    arr[i][l]=0;
                }
            }
        }
       }
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        matrix[i][j]=arr[i][j];
        }
       }
      
    }
};