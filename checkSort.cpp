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
void print(Node* head){
    Node* tmp = head;
    int flag =  1;
    while(tmp->next != NULL)
    { 
        if(tmp->val  >  tmp->next->val ){
            flag = 0;
        }else{
            flag = 1;
        }
        tmp = tmp->next;
    }
    if(flag == 1){
        cout << "yes" <<endl;
    }else{
        cout << "no "<<endl;
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
   
    print(head);
    return 0;
}