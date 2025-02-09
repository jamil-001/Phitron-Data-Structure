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
    if(root)
       q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        Node* myleft,*myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);
        f->left = myleft;
        f->right = myright;
        if(f->left)
           q.push(f->left);
        if(f->right)
           q.push(f->right);
    }
    return root;
      
}
void leftboundary(Node* root,vector<int>&left_node){
    while(root != NULL)
    {
        left_node.push_back(root->val);
        if(root->left != NULL)
        {
            root = root->left;
        }else{
            root = root->right;
        }
    }
}
void rightboundary(Node* root,vector<int>&right_node){
    while(root != NULL)
    {
        right_node.push_back(root->val);
        if(root->right != NULL)
        {
            root = root->right;
        }else{
            root = root->left;
        }
    }
}
int main(){
    Node* root = tree_input();
    if(root == NULL) return 0;
    vector<int>left_node,right_node;
    leftboundary(root->left,left_node);
    sort(left_node.rbegin(),left_node.rend());
    for(int val : left_node)
    {
        cout << val << " ";
    }
    cout << root->val <<" ";
    rightboundary(root->right,right_node);
    for(int val : right_node)
    {
        cout << val <<" ";
    }
    
    return 0;
}