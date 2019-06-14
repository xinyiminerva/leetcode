class leetcode20{
    public:
    bool isValid(string s) {
        stack<char> op;
        for(char& c :s) {
            switch(c) {
                case '(':
                case '{':
                case '[': op.push(c); break;
                case ')' : if(op.empty() || op.top() != '(') return false; else op.pop(); break;
                case '}' : if(op.empty() || op.top() != '{') return false; else op.pop(); break;
                case ']' : if(op.empty() || op.top() != '[') return false; else op.pop(); break;
                default;
            }
        }
        return op.empty();
    }

};