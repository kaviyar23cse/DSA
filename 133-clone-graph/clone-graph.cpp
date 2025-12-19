/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {362.0
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    map<Node*,Node*> mp;
    Node* cloneGraph(Node* node) {
        
        if(node==NULL) return node;

            Node *nn=new Node(node->val);
             mp[node]=nn;
        for(int i=0;i<node->neighbors.size();i++){
            if(mp.contains(node->neighbors[i]))
                     nn->neighbors.push_back(mp[node->neighbors[i]]);
            else nn->neighbors.push_back(cloneGraph(node->neighbors[i]));
        }
        return nn;
    }
};