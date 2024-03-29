class leetcode1021{
    public:
    string removeOuterParentheses(string S) {
    string res = "";
  for (auto p1 = 0, p2 = 0, open = 0, close = 0; p2 < S.size(); ++p2) {
    if (S[p2] == '(') ++open;
    else ++close;
    if (open == close) {
      res += S.substr(p1 + 1, p2 - p1 - 1);
      p1 = p2 + 1;
    }
  }
  return res;
}
};
    