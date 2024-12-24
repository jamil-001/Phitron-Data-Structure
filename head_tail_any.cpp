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
    for(int i=1;i<idx;i++){
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
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int idx,value;
    while(cin>> idx >> value){
        Node* tmp =head;
        int size= 0;
        while(tmp != NULL)
        {
            size++;
            tmp = tmp->next;
        }
        if(idx < 0 || idx > size){
            cout << "Invalid" <<endl;
        }else if(idx == 0){
            insert_at_head(head,value);
        }else if(idx == size){
            insert_at_tail(head,tail,value);
        }else{
            insert_at_any_pos(head,idx,value);
        }

        print(head);
    }

    return 0;
}
