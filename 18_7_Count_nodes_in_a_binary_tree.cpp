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
    queue<Node*> q;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root) q.push(root);
    while(!q.empty())
    {
        //1.ver kore ana
        Node* p = q.front();
        q.pop();
        //oi node niye kaj kora
        int l,r;
        cin >> l >> r;
        Node* myleft,*myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);
        p->left = myleft;
        p->right = myright;
        //children push kora
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val <<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
int cout_nodes(Node* root)
{
    if(root == NULL)
    return 0;
    int l = cout_nodes(root->left);
    int r = cout_nodes(root->right);
    return l+r+1;
}
int main(){
    Node* root = input_tree();
    //level_order(root);
    cout <<cout_nodes(root);
    return 0;
}