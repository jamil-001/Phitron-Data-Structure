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
Node* input_tree()
{
    int val;
    cin >> val;
    
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root)
       q.push(root);
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
void level_order(Node* root)
{
    queue<Node*>q;
    if(root)
      q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val <<" ";
        if(f->left)
           q.push(f->left);
        if(f->right)
           q.push(f->right);
    }
}
void insert(Node* &root,int val)
{
    if(root == NULL)
       {
        root = new Node(val);
       }
    if(root->val > val)
      {
        //left
        if(root->left == NULL){
            root->left = new Node(val);
        }else{
            insert(root->left,val);
        }
      }else{
        //right
        if(root->right == NULL){
            root->right = new Node(val);
        }else{
            insert(root->right,val);
        }
      }
}
int main(){
    Node* root = input_tree();
    int val;
    cin >> val;
    insert(root,val);
    level_order(root);
    return 0;
}
/* 
input:
10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1 
21
output:
10 6 23 9 19 29 7 12 21 35 

*/