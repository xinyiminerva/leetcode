class leetcode921{
    public :
    //by votrubac
int minAddToMakeValid(string S) {
    int open = 0, closed = 0;
    for (auto c : S) {
      open = c == '(' ? max(0, open) + 1 : open - 1;
      if (open < 0) ++closed;
    }
    return max(0, open) + closed;
}
};