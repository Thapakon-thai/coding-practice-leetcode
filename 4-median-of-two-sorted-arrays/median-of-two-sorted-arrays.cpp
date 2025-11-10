class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int sum = n+m;
        int mean_idx = (sum  / 2 + 1);

        if (n == 0) {
            if (m % 2 == 1) return nums2[m/2];
            else return (nums2[m/2 - 1] + nums2[m/2]) / 2.0;
        }

        if(m == 0) {
            if (n % 2 == 1) return nums1[n/2];
            else return (nums1[n/2 - 1] + nums1[n/2]) / 2.0;
        }

        int i=0, j=0;
        double prev=0, curr=0;
        while(i+j < mean_idx) {

            prev = curr;
            if(i < n && (j >= m || nums1[i] < nums2[j])) {
                curr = nums1[i];
                i++;
            } else  {
                curr = nums2[j];
                j++;
            }
            
        }

       return (sum % 2 == 1) ? curr : (prev + curr) / 2.0;
    }


};