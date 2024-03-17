class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n);
        int j = 0;
        for (int i = 0; i < n; i++) {
            ans[j] = nums[i];
            ans[j + 1] = nums[n + i];
            j = j+2;
        }
        return ans;
    }
};
[2,5,1,3,4,7]
