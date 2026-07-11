class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum=0;
        for(int i=1;i<=n+k;i++){
            int result=n&i;
            if(abs(n - i) <= k && result==0 ){
                sum+=i;
            }
        }
   return sum;
    }
};