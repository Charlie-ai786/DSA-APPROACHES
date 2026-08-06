class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans=n;
        while(true){
            int product=1;
            n=ans;
            while(n){
                product*=n%10;
                n/=10;
            }
            if(product%t==0) break;
            else ans++;
        }
        return ans;
    }
};