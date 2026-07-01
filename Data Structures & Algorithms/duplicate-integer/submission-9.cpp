class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Use a hash set to store elements we've seen so far
        unordered_set<int> seen;
        
        for (int num : nums) {
            // If the element is already in the set, it's a duplicate
            if (seen.find(num) != seen.end()) {
                return true;
            }
            // Add the current element to the set
            seen.insert(num);
        }
        
        // No duplicates found
        return false;
    }
};