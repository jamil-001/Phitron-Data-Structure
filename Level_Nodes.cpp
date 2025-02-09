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
void level(Node* root,int k)
{
    if(!root){
        cout << "Invalid" << endl;
        return;
    }
    queue<pair<Node*,int>>q;
    q.push({root,0});
    bool found = false;
    while(!q.empty())
    {
        Node* node = q.front().first;
        int level = q.front().second;
        q.pop();
        if(level == k)
        {
            cout << node->val << " ";
            found = true;
            
        }
        
        if(node->left)
          q.push({node->left,level+1});
        if(node->right)
           q.push({node->right,level+1});
    }
    if(!found)
    cout <<"Invalid" << endl;
}
int main(){
    Node* root = tree_input();
    int x;
    cin >> x;
    level(root,x);
    return 0;
}