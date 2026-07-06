class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        auto lamda=[](vector<int>& vec1,vector<int>& vec2){
            if(vec1[0]==vec2[0]){
                return vec1[1]>vec2[1];
            }
            return vec1[0]<vec2[0];
        };
        sort(begin(intervals),end(intervals),lamda);
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
           if(ans.back()[0]<=intervals[i][0] && ans.back()[1]>=intervals[i][1] ) {
            continue;
           }else{
            ans.push_back(intervals[i]);
           }
        }
        return ans.size();

    }
};