#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int i=s.size()-1;

        while(i>=0 && s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            count++;
            i--;
        }
        return count;
    }
};
int main(){
    string s;
    Solution obj;
    getline(cin,s);
    int ans=obj.lengthOfLastWord(s);
    cout<<ans;
}
/*## Approach

1. Start from the end of the string.
2. Skip all trailing spaces.
3. Count characters until a space or beginning of string is reached.
4. Return the count.

### Time Complexity
O(n)

### Space Complexity
O(1)
*/