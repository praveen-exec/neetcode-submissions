/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

//TC:O(N) 
//SC:O(N) in case of skew tree
class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        set<Node*> st;

        // Store all ancestors of p
        while(p != nullptr){
            st.insert(p);
            p=p->parent;
        }

        // first common ancestor of q
        while(q != nullptr){
            if(st.count(q))
              return q;
            
            //nahi toh
            q=q->parent;
        }
        return nullptr;
    }
};