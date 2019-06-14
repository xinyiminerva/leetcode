class leetcode590{
    public:
    vector<int> nodes;
    vector<int> postorder(Node* root) {
        if(root == NULL) {
            return nodes;
        }else{
            helper(root);
        }
        nodes.push_back(root->val);
        return nodes;
        }
        private:
        void helper(Node* root) {
            for(int i = 0; i < root->children.size(); i++) {
                helper(root->children[i]);
                nodes.push_back(root->children[i]->val);
            }
        }
    }
    /**
     * 
     * vector<int> postorder(Node* root) {
    if(root==NULL) return {};
    vector<int> res;
    stack<Node*> stk;
    stk.push(root);
    while(!stk.empty())
    {
        Node* temp=stk.top();
        stk.pop();
        for(int i=0;i<temp->children.size();i++) stk.push(temp->children[i]);
        res.push_back(temp->val);
    }
    reverse(res.begin(), res.end());
    return res;
}*/
/**
 * by marcus_X
 *   vector<int> postorder(Node* root) {
        stack<pair<Node*,int>> s;   // Format: <ParentNode, NumChildren we've filled from>
        Node *fillNode = NULL;
        vector<int> results;
        
        if (root) s.push({root,0});
        while (s.size()) {
            Node* parent = s.top().first;
            int& childIdx = s.top().second;
            if (childIdx < parent->children.size()) {
                fillNode = parent->children[childIdx];
                childIdx++;
            } else {
                // No more children, process parent
                results.push_back(parent->val);
                s.pop();
            }
            
            while (fillNode) {
                if (fillNode->children.size()) {
                    s.push({fillNode,1}); // 1 b/c next loop adds the child
                    fillNode = fillNode->children[0];
                } else {
                    s.push({fillNode,0});
                    fillNode = NULL;
                }
            }
        }
        return results;
    }**/
}