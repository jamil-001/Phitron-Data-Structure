#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node* &head, int val)
{
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void delete_at_head(Node* &head,Node* &tail){
    if(head == NULL){
        return;
    }
    Node* deletenode = head;
    head = head->next;
    if(head == NULL){
        tail = NULL;
    }
    delete deletenode;
}
void delete_at_any_pos(Node* &head,Node* &tail,int idx)
{   
    if(idx == 0){
        delete_at_head(head,tail);
        return;
    }

    Node* tmp = head;
    for(int i=1;i<idx;i++){
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = deletenode->next;
    if(tmp->next == NULL){
        tail = tmp;
    }
    delete deletenode;

}
void delete_at_tail(Node* &head,Node* &tail,int idx){
    Node* tmp = head;
    for(int i=1;i<idx;i++){
        tmp =tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    if(tmp->next == NULL){
        tail= tmp;
    }
    delete deletenode;
}
int size(Node* head )
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void print(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp= tmp->next;
    }
    cout << endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int t;
    cin >> t;
    while(t--){
        int x,v;
        cin >> x >> v;
        if(x == 0){
            insert_at_head(head,v);
            if(tail == NULL) tail = head; 
        }else if(x == 1){
            insert_at_tail(head,tail,v);
        }else if(x == 2){
            int sz = size(head);
            if(v < 0 || v >= sz){
                print(head);
                continue;
            }
            delete_at_any_pos(head,tail,v);
            }
                print(head);
    }
    return 0;
}