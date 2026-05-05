class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];
            auto iter = arr.find(val);
            // If elt doesn't exist
            if (iter == arr.end())
                arr.insert(val);
            else
                return true;
        }
        return false;
    }
};