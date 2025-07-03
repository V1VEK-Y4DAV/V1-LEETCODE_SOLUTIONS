// 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m + n, 0);
        int index = 0;
        int i1 = 0;
        int i2 = 0;
        while (i1 < m && i2 < n) {
            if (nums1[i1] <= nums2[i2] && i1 < m) {
                nums3[index++] = nums1[i1++];
            } else {
                nums3[index++] = nums2[i2++];
            }
        }
        while (i1 < m) {
            nums3[index++] = nums1[i1++];
        }
        while (i2 < n) {
            nums3[index++] = nums2[i2++];
        }
        for (int i = 0; i < m + n; i++) {
            nums1[i] = nums3[i];
        }
    }
};