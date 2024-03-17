class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t nums_size =nums.size();
        
        vector<int> ans(nums_size * 2);
        for (int i = 0; i < nums_size; i++) {
            ans.at(i) = ans.at(i+ nums_size) = nums.at(i);
        }
        return ans;
    }
};
[1,2,1]
