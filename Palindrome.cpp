#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
       head = newnode;
       tail = newnode;
       return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    
}
bool palindrom(Node* head,Node* tail){
     Node* tmp1 = head;
     Node* tmp2 = tail;
     bool flag = true;
     while(tmp1 != NULL && tmp2 != NULL){
        if(tmp1->val != tmp2->val){
            flag = false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
     }
     return flag;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
   if(palindrom(head,tail)){
    cout <<"YES"<<endl;
   }else{
    cout << "NO" << endl;
   }

    return 0;
}