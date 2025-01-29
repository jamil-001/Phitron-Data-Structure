#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forword(Node* head)
{
    Node* tmp = head;
    cout << "L -> ";
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_backward(Node* tail)
{
    Node* tmp = tail;
    cout << "R -> ";
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_any_pos(Node* &head,Node*&tail,int idx,int val){
   Node* newnode = new Node(val);
   if(idx == 0){
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    print_forword(head);
    print_backward(tail);
    return;
   }
   Node* tmp = head;
   int cnt = 0;
   while(tmp != NULL && cnt < idx -1){
    tmp = tmp->next;
    cnt++;
   }
   if(tmp == NULL || (tmp->next == NULL && cnt != idx-1)){
    cout << "Invalid" << endl;
    return;
   }
   newnode->next = tmp->next;
   if(tmp->next != NULL){
    tmp->next->prev = newnode;
   }
   tmp->next = newnode;
   newnode->prev = tmp;
   if(newnode->next == NULL){
    tail = newnode;
   }
   print_forword(head);
   print_backward(tail);
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    
    int q;
    cin >> q;
    int idx,val;
    while(q--){
        cin >> idx >> val;
      insert_at_any_pos(head,tail,idx,val);
    }

    return 0;
}