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
void insert_at_any_pos(Node* &head,int idx,int val)
{
     Node* newnode = new Node(val);
     if(head == NULL)
     {
        head = newnode;
        return;
     }
     Node* tmp = head;
     for(int i=1;i<idx;i++)
     {
        tmp = tmp->next;
     }
     newnode->next = tmp->next;
     tmp->next = newnode;
}
void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout <<tmp->val <<endl;
        tmp = tmp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int idx,val;
    
    while(true)
    {
        cin >> idx >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_any_pos(head,idx,val);
    }
    print_linked_list(head);
    return 0;
}