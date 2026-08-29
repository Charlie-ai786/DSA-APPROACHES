class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mpp;
        for(int i:nums){
            mpp[i]++;
        }
        for(auto &num:mpp){if(num.second==1) return num.first;}
        return 0;
    }
};