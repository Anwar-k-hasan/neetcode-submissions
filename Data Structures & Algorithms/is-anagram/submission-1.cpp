class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> arr;
        // Map each char in s to a num
        for (auto& c: s) {
            // auto iter = arr.find(c);
            arr[c] += 1;
        }

        // Check if num of chars in t matches s
        for (auto& c: t) {
            // auto iter arr.find(c);
            if (arr[c] == 0) return false;
            else arr[c] -= 1;
        }
        for (auto& c: arr) {
            if (c.second != 0) return false;
        }
        return true;
    }
};
