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

int getsize(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head1,tail1,val);
    }
     Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    int size1 = getsize(head1);
    int size2 = getsize(head2);
    if(size1 == size2)
    {
        cout << "yes"<<endl;
    }else{
        cout << "no"<<endl;
    }
    
    return 0;
}