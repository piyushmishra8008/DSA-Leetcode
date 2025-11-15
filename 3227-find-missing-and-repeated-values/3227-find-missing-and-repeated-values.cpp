class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a,b;
        int n=grid.size();
        unordered_set<int>st;
        int sum=n*n*(n*n+1)/2;
        int actualsum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                int val=grid[i][j];
                actualsum+=val;
            if(st.find(val)!=st.end()){
                a=val;
            }else{
                st.insert(val);
            }

            }

        }
        b=sum-(actualsum-a);
        return {a,b};

    }
};