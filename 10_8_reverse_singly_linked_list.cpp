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

void insert_in_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL)//if no head declare then head is newnode.
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<endl;
        tmp = tmp->next;
    }
    
}
void reverse_linked_list(Node* &head,Node* tmp){
    if(tmp->next == NULL){
        head = tmp;
        return;
    }
    reverse_linked_list(head,tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;
    insert_in_tail(head,tail,40);
    reverse_linked_list(head,head);
    
    print_linked_list(head);
    return 0;
}