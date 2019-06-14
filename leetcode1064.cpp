using namespace std;
 class leetcode1064{
     public:
     int fixedPoint(vector<int>& A) {
        int l = 0, h = A.size() - 1, m, ans = -1;
        while( l <= h) {
            m = (l+h) / 2;
            if( A[m] >= m) {
                if(A[m] == m) 
                   ans = m;
                h = m-1;
            }else l = m+1;
        }
        return ans;
     }
 };