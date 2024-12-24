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
void print_linked_list(Node* head)
{
    
    int freq[105] = {0};
    Node* tmp = head;
    int flag =0;
    while (tmp != NULL)
    {    
        freq[tmp->val]++;
        if(freq[tmp->val] > 1){
            flag = 1;
        }
        tmp = tmp->next;

    }
    if(flag == 1){
        cout <<"YES"<<endl;
    }else{
        cout <<"NO" <<endl;
    }
    
}
int main(){
    Node* head =NULL;
    Node* tail = NULL;
    int val;
    int cnt = 0;
    while(true)
    {
       cin >> val;
       if(val == -1)
       {
        break;
       } 
       cnt++;
       insert_at_tail(head,tail,val);
    }
   print_linked_list(head);
    


    return 0;
}