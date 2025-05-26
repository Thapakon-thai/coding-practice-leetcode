class Solution {
public:
    // test2
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int m_idx = m - 1;
        int n_idx = n - 1;
        int r = m + n - 1;
        while(n_idx >= 0) {
            if (m_idx >= 0 && nums1[m_idx] > nums2[n_idx]) {
                nums1[r] = nums1[m_idx];
                m_idx--;
            } else {
                nums1[r] = nums2[n_idx];
                n_idx--;
            }

            r--;
        }
    }
};