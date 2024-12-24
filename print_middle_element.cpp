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
void print_middle(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while( fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast == NULL)
    {
        Node* mid = head;
        while(mid->next != slow)
        {
            mid = mid->next;
        }
        cout << mid->val <<" " <<slow->val <<endl;
    }else{
        cout << slow->val <<endl;
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
        insert_at_tail(head,tail,val);
    }
    print_middle(head);
    return 0;
}