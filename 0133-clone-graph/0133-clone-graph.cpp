/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
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
    Node* cloneGraph(Node* node) {
        if(!node)return NULL;
        queue<Node*> q;
        unordered_set<Node*> us;
        us.insert(node);
        q.push(node);
        unordered_map<int,Node*> ump;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node * tmp=q.front();
                q.pop();
                if(ump.find(tmp->val)==ump.end()){
                    ump[tmp->val]=new Node(tmp->val);
                }
                for(Node* nbr:tmp->neighbors){
                    if(ump.find(nbr->val)==ump.end()){
                        ump[nbr->val]=new Node(nbr->val);
                    }           
                    ump[tmp->val]->neighbors.push_back(ump[nbr->val]);
                    if(us.find(nbr)==us.end()){
                        us.insert(nbr);
                        q.push(nbr);
                    }
                }
            }
        } 
        return ump[node->val];
    }
};