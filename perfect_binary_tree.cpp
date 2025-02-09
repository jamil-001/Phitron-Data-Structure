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
int max_height(Node* root)
{
    if(root == NULL )return 0;
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r)+1;
    
}
int node_count(Node* root){
    if(root == NULL) return 0;
    int l = node_count(root->left);
    int r = node_count(root->right);
    return l+r+1;
}

int main(){
    Node* root = tree_input();
    int height = max_height(root);
    int node = node_count(root);
    int res = pow(2,height) -1;
    if(node == res)
    {
        cout << "YES" <<endl;

    }else{
        cout <<"NO" <<endl;
    }
    return 0;
}