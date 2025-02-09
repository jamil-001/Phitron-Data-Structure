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
        //1.ber kore ana
        Node* p = q.front();
        q.pop();
        //2.oi node niye kaj kora
        int l,r;
        cin >> l >> r;
        Node* myleft,*myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);

        p->left = myleft;
        p->right = myright;
        //3. children push kora
        if(p->left)
           q.push(p->left);
        if(p->right)
           q.push(p->right);
    }
    return root;
}
void level_order(Node* root)
{
    
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        //1.ber kora
        Node* f = q.front();
        q.pop();
        //2.oi node niye kaj kora
        cout << f->val << " ";
        //3.children push kora
        if(f->left)
           q.push(f->left);
        if(f->right)
            q.push(f->right);

    }
}
int main(){
    Node* root = tree_input();
    level_order(root);
    return 0;
}