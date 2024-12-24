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
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void maximum(Node* head)
{   
    Node* tmp = head;
    int max = 0;
    for(Node* i = tmp;i != NULL;i = i->next){
        if(max < i->val)
        {
            max = i->val;
        }
    }
    cout << max << endl;
}
int main(){
      Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin>> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    maximum(head);
    return 0;
}