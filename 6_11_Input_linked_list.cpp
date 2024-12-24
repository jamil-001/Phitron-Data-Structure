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
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_in_tail(head,tail,val);
    }
    print_linked_list(head);
    return 0;
}