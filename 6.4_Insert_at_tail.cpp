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
void insert_in_tail(Node* &head,int val){
    Node* newnode = new Node(val);
    if(head == NULL)//if no head declare then head is newnode.
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void print_in_linkedlist(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<endl;
        tmp = tmp->next;
    }
    
}
int main(){
    Node* head ;
    //when no head declary
    // = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);

    // head->next = a;
    // a->next = b;

    insert_in_tail(head,100);
    print_in_linkedlist(head);
    return 0;
}