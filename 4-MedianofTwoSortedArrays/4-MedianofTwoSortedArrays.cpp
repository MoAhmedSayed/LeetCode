                partitionNums2 == 0 ? INT_MIN : nums2[partitionNums2 - 1];
                                 : nums1[partitionNums1];

            int leftNums2 =
                partitionNums1 == 0 ? INT_MIN : nums1[partitionNums1 - 1];
            int rightNums1 = partitionNums1 == nums1.size()
                                 ? INT_MAX
            int partitionNums2 = ((combinedSize + 1) / 2) - partitionNums1;

            int leftNums1 =
        int combinedSize = nums1.size() + nums2.size();
        while (low <= high) {
            int partitionNums1 = (low + high) / 2;
        int low = 0;
        int high = nums1.size();
            nums1 = nums2;
            nums2 = temp;
        }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            vector<int> temp = nums1;
class Solution {
public:
[
