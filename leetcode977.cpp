class leetcode977{
    public:
    vector<int> sortedSquares(vector<int>& A) {
        int len = A.size();
        vector<int> res(len, 0);
        int i = 0, j = len - 1;
        for(int k = len-1; k >= 0; k--){
            if(abs(A[i]) > abs(A[j]))
                res[k] = pow(A[i++], 2);
            else
                res[k] = pow(A[j--], 2);
        }
        return res;
    }
};