class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int> v;
        for (int num : nums) {
            if (num == 0) {
                count += 1;
            }
            else {
                v.push_back(num);
            }
        }
        while (count--) {
            v.push_back(0);
        }
        nums.swap(v);
    }
};