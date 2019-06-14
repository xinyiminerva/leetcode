
using namespace std;
 class leetcode771{
  public:
    int numJewelsInStones(string J, string S) {
        //question here do we need all ascII table?
        vector<int> vec(128,0);
        int result = 0;
        for(auto j : J) 
        vec[j] = 1;
        for(auto s :S) {
            if(vec[s] > 0)
            result++;
        }
        return result;
    }
    /** int numJewelsInStones(string J, string S) {
        int res=0;
        set<char> set;
        for(char i:J) set.insert(i);
        for(char i:S) res+=set.count(i);
        return res;
    }
    **/
};