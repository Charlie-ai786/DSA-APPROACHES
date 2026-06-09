#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char , int > mp={
            {'I',1},{'V',5},{'X',10},
            {'L',50},{'C',100},{'D',500},
            {'M',1000}
        };

        int ans=0;
        for(int i=0;i<s.size();i++){
            if(i+1<s.size() && mp[s[i]]<mp[s[i+1]])
            {
                ans-=mp[s[i]];
            }else{
                ans+=mp[s[i]];
            }
        }
        return ans;
    }
};

int main(){
    string s;
    Solution obj;
    cin>>s;
    int ans=obj.romanToInt(s);
    cout<<ans;
}

/*# Roman to Integer

## Problem
Given a Roman numeral, convert it to an integer.

### Roman Values

| Symbol | Value |
|---------|---------|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

---

## Approach

Normally Roman numerals are added from left to right.

Example:

```text
VIII = 5 + 1 + 1 + 1 = 8
```

But there are special cases where a smaller value appears before a larger value.

Example:

```text
IV = 5 - 1 = 4
IX = 10 - 1 = 9
XL = 50 - 10 = 40
CM = 1000 - 100 = 900
```

### Observation

- If current symbol value < next symbol value → subtract current value.
- Otherwise → add current value.

---

## Algorithm

1. Store Roman symbols and their integer values in a hashmap.
2. Traverse the string from left to right.
3. If current value is smaller than the next value:
   - Subtract current value from answer.
4. Otherwise:
   - Add current value to answer.
5. Return the final answer.

---

## Dry Run

Input:

```text
MCMXCIV
```

| Character | Operation | Answer |
|------------|------------|---------|
| M | +1000 | 1000 |
| C | -100 | 900 |
| M | +1000 | 1900 |
| X | -10 | 1890 |
| C | +100 | 1990 |
| I | -1 | 1989 |
| V | +5 | 1994 |

Output:

```text
1994
```

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

Single traversal of the string.

### Space Complexity

```text
O(1)
```

Hashmap size is fixed (7 Roman symbols only).

---

## Key Insight

Whenever a smaller Roman numeral appears before a larger one, subtract it instead of adding it.*/