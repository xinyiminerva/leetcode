class leetcode589{
    /*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
/** by swarooprs94
 * 
 vector<int> preorder(Node* root) {
        vector<int> res;
        helper(root, res);
        return res;
    }
    
    void helper(Node* root, vector<int> &res)
    {
        //If root is NULL, return
        if(!root) return;
        
        res.push_back(root->val);
        //return if there are no children nodes.
        if(!root->children.size()) return;
        //Else traverse through each children node and keep adding to res array.
        for(int i = 0; i < root->children.size(); i++) helper(root->children[i], res);
    }
    **/
   /**
    * by salamander9192
    * using stack
    *  vector<int> preorder(Node* root) {
        vector<int> res;
        stack<Node*> mstack;
        if(root==NULL)
            return res;
        mstack.push(root);
        while(!mstack.empty()){
            Node* curr = mstack.top();
            mstack.pop();
            res.push_back(curr->val);
            for(int i=curr->children.size()-1;i>=0;i--)
                mstack.push(curr->children[i]);
        }
        return res;
    }**/
   public:
    vector<int>preorder(Node* root) {
        vector<int> res;
        vector<Node*> nodes;
        if(root == NULL) 
        return res;
        nodes.push_back(root);
        while(nodes.size() != 0) {
            Node* curr = nodes[0];
            res.push_back(curr->val);
            nodes.erase(nodes.begin());
            for(int i = curr->children.size()-1; i>=0; i--)
            nodes.insert(nodes.begin(), curr->children[i]);
        }
        return res;
    }
};