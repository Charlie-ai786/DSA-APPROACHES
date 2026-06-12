#include<iostream>
using namespace std;
class Solution {
public:
    int sqrtex(int num) {
        if(num==0) return 0;
        int low=1;
        int high=num;
        int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==num){
                return mid;
            }else if(mid*mid<num){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};
int main(){
    int x;
    Solution obj;
    cin>>x;
    int ans=obj.sqrtex(x);
    cout<<ans;
}