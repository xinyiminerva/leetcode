class leetcode339{
    public:
    int depthSum(vector<NestedInteger>& nestedList) {
        return depthSum(nestedList, 1);
    }
private:
    int depthSum(vector<NestedInteger>& l, int d) {
        int sum = 0;
        for (NestedInteger& i : l) {
            if (i.isInteger()) {
                sum += i.getInteger() * d;
            } else {
                sum += depthSum(i.getList(), d + 1);
            }
        }
        return sum;
    }
};
/**
 *  int depthSum(vector<NestedInteger>& nestedList) {
        queue<NestedInteger> todo;
        for (auto i : nestedList) {
            todo.push(i);
        }
        int sum = 0, d = 1;
        while (!todo.empty()) {
            int n = todo.size();
            for (int i = 0; i < n; i++) {
                NestedInteger ni = todo.front();
                todo.pop();
                if (ni.isInteger()) {
                    sum += ni.getInteger() * d;
                } else {
                    for (auto j : ni.getList()) {
                        todo.push(j);
                    }
                }
            }
            d++;
        }
        return sum;
    }
    **/