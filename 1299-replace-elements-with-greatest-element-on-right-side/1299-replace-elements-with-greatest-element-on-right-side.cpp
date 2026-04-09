class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i==n-1){
                arr[i]=-1;
            }else{
                int maxi=0;
                for(int j=i+1;j<n;j++){
                    maxi=max(arr[j],maxi);
                }
                swap(arr[i],maxi);
            }
        }
        return arr;
    }
};