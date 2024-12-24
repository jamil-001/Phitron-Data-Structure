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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}
void delete_at_tail(Node* &head,Node* &tail,int idx)
{   
    Node* tmp = head;
    for(int i=1;i<idx;i++){
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    tail = tmp;

}
void print(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    delete_at_tail(head,tail,3);
    print(head);
    
    return 0;
}