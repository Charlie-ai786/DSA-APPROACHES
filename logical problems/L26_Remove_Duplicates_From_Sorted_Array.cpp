#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int i = 0;
        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i]) {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return i + 1;
    }
};

int main() {
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter Elements (sorted array): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int k = obj.removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << "\nNumber of unique elements: " << k;

    return 0;
}