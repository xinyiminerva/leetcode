class leetcode961{
    public:
     int repeatedNTimes(vector<int>& A) {
        int n = A.size();
        for(int i = 0; i < n-1; i++) {
            // Repeated back to back? Any repeating number is the solution.
            if(A[i] == A[i+1]) return A[i];
        }
        for(int i = n-3; i >= 0; i--) {
            // Distributed evenly? A[n-2] or A[n-1] is the solution
            if(A[i] == A[n-1] || A[i] == A[n-2]) return A[i];
        }
        return INT_MAX;
    }
};
/**
 *  int repeatedNTimes(vector<int>& A) {
        set<int> vec;
        int prev_size = 0;
        for(int a:A){
            vec.insert(a);
            int cur_size = vec.size();
            if (cur_size == prev_size) { return a; }
            else { prev_size = cur_size; }
        }
        return 0;
    }
    **/