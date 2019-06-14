using namespace std;
 class leetcode760{
  public:
   vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> res;
        unordered_map<int,int> m;
        for (int i=0; i<A.size(); ++i) m[B[i]]=i;
        for (int i=0; i<A.size(); ++i) res.push_back(m[A[i]]);
        return res;
    }
};