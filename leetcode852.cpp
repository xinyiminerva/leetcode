class leetcode852{
    public:
    int peakIndexInMountainArray(vector<int>& A) {
    return distance (A.begin (), max_element (A.begin (), A.end ()));
}
/**
 * int peakIndexInMountainArray(vector<int>& A) {
        int n = A.size();
        
        int start = 0;
        int end = n - 1;
        
        int res = -1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if ((mid - 1 >= 0 && A[mid] > A[mid - 1]) && (mid + 1 < n && A[mid] > A[mid + 1])) {
                res = mid;
                break;
            }
            
            if (mid - 1 < 0 || A[mid] > A[mid - 1]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return res;
    }**/
};

