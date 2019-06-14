class leetcode293{
    public:
    vector<string> generatePossibleNextMoves(string s) {
        vector<string> res;
        if(s.length() == 0) {return result;}
        for(int i = 0; i < s.length() -1; i++ ) {
            if(s[i] == '+' && s[i+1] == '+') {
                string temp = s;
                temp[i] = '-';
                temp[i+1] = '-';
                result.push_back(temp);
            }
        }
        return result;
    }

};