class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int index1 = 0;
        int index2 = 0;
        while(index1 < nums1.size() && index2 < nums2.size()){
            if(nums1[index1] <= nums2[index2]){
                res.push_back(nums1[index1]);
                index1++;
            }
            else{
                res.push_back(nums2[index2]);
                index2++;
            }
        }

        while(index1 < nums1.size()){
            res.push_back(nums1[index1]);
            index1++;
        }

        while(index2 < nums2.size()){
            res.push_back(nums2[index2]);
            index2++;
        }

        int size = res.size();

        if(size&1){
            return res[(size -1)/2];
        }
        else{
            double a = res[(size-1)/2];
            double b = res[((size-1)/2)+1];
            return (a+b)/2;
        }
    }
};