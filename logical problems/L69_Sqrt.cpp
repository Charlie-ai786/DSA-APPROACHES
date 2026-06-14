#include<iostream>
using namespace std;
class Solution {
public:
    int sqrtex(int num) {
        if(num==0) return 0;
        int l=1;
        int h=num;
        int ans=0;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(mid*mid==num){
                return mid;
            }else if(mid*mid<num){
                ans=mid;
                l=mid+1;
            }else{
                h=mid-1;
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