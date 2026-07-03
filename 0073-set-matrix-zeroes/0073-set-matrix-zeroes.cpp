class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rowimpacted=false;
        bool colimpacted=false;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int col=0;col<n;col++){
            if(matrix[0][col]==0){
               colimpacted=true; 
            }
        }
        for(int row=0;row<m;row++){
            if(matrix[row][0]==0){
               rowimpacted=true; 
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(colimpacted){
            for(int col=0;col<n;col++){
                matrix[0][col]=0;
            }
        }
        
        if(rowimpacted){
            for(int row=0;row<m;row++){
                matrix[row][0]=0;
            }
        }
        

    }
};