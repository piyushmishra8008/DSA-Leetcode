class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area=-1;
        int ans=-1;
        for(int i=0;i<dimensions.size();i++){
            int a=dimensions[i][0];
            int b=dimensions[i][1];
            if(ans<(a*a+b*b)||(ans==(a*a+b*b))&&area<(a*b)){
                ans=(a*a+b*b);
                area=a*b;
            }
        }

            
        
        return area;
    }
};