class leetcode832{
    public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (auto& row: A){
            reverse(row.begin(),row.end());
            for (auto& col: row) col^=1;
        }
        return A;
    }
};