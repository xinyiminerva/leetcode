class leetcode944{
    public:
    int minDeletionSize(vector<string> &A) {
        int num = 0;
        for (int j = 0; j < A[0].size(); ++j) {
            for (int i = 1; i < A.size(); ++i) {
                if (A[i][j] < A[i - 1][j]) {
                    num++;
                    //only break out innermost loop
                    break;
                }
            }
        }
        return num;
    }
};