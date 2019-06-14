using namespace std;
 class leetcode807{
     public:
      int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        if (grid.size() == 0) return 0;
        vector<int> hor(grid.size(),0);
        vector<int> ver(grid[0].size(),0);
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                ver[i] = max(ver[i], grid[i][j]);
                hor[j] = max(hor[j], grid[i][j]);
            }
        }
        int result = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] < ver[i] && grid[i][j] < hor[j]) {
                    result += min (ver[i] - grid[i][j], hor[j] - grid[i][j]);
                }
            }
        }
        return result;
    }
};