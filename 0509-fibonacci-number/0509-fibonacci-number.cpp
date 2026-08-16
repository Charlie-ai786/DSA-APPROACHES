class Solution {
public:
    int fib(int n) {
        int first=0;
        int second=1;
        int third=0;
        while(n--){
            third=first+second;
            first=second;
            second=third;
        }
        return first;
    }
};