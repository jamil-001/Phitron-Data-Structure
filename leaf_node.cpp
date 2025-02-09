#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* tree_input()
{
    int val;
    cin >> val;
    queue<Node*>q;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        Node* myleft,*myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);
        p->left = myleft;
        p->right = myright;
        if(p->left)
           q.push(p->left);
        if(p->right)
           q.push(p->right);
        
    }
    return root;

}
void leafnode(Node* root,vector<int>&v){
     if(root == NULL) return;
     if(root->left == NULL && root->right == NULL){
        v.push_back(root->val);
     }
     leafnode(root->left,v);
     leafnode(root->right,v);
}
int main(){
    Node* root = tree_input();
    vector<int>v;
    leafnode(root,v);
    sort(v.rbegin(),v.rend());
    for(int val: v){
        cout<< val <<" ";
    }

    return 0;
}