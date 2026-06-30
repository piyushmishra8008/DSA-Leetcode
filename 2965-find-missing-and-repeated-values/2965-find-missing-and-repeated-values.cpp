class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        int n=grid.size();
        int obtained=0;
        
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int j=0;
           while(j<grid[i].size()){

            if(mp.find(grid[i][j])!=mp.end()){
                ans.push_back(grid[i][j]);
                obtained-=grid[i][j];
            }
            mp[grid[i][j]]++;
            obtained+=grid[i][j];
            j++;
            }
        }
        cout<<obtained;
        long long total = (n*n)*(n*n+1)/2;
        cout<<total;
        long long sum=total-obtained;
        ans.push_back(sum);
        return ans;
    }
};