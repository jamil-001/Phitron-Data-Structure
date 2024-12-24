#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
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
    }else{
        tail->next = newnode;
        tail = newnode;
    }
}

void insert_at_head(Node* &head,int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
   
}
void insert_at_any_pos(Node* &head,int idx,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    for(int i=0;i<idx-1;i++){
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
void print(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<endl;
        tmp = tmp->next;
    }
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    int size= 0;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        size++;
        insert_at_tail(head,tail,val);
    }
    int idx,val;
    while(cin>> idx >> val){
        
        if(idx == 0){
            insert_at_head(head,val);
        }else if(idx == size){
            insert_at_tail(head,tail,val);
        }else if(idx > size){
            cout <<"Invalid"<<endl;
        }else{
            insert_at_any_pos(head,idx,val);
        }
    }

    return 0;
}
