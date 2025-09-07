class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return nums.back();  
    }
};
// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(1)   
// Note: This solution modifies the input array by sorting it.
//If preserving the original order is necessary, consider using a hash map or XOR approach.
