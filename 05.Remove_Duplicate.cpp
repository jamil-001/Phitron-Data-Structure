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
void print(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
}
void remove_duplicate(Node* &head){
   Node* current = head;
   while(current != NULL)
   {
    Node* pre = current;
    Node* tmp = current->next;
    while(tmp != NULL){
        if(tmp->val == current->val){
            pre->next = tmp->next;
            delete tmp;
            tmp = pre->next;
        }else{
            pre = tmp;
            tmp = tmp -> next;
        }
    }
    current = current->next;
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
    remove_duplicate(head);
    print(head);
    return 0;
}