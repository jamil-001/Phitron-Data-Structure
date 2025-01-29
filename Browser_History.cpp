#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    string name;
    Node *next;
    Node* prev;
    Node(string name)
    {
        this->name = name;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,string name){
    Node* newnode = new Node(name);
    if(head == NULL){
       head = newnode;
       tail = newnode;
       return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    string name;
    while(true){
        cin >> name;
        if(name == "end"){
            break;
        }
        insert_at_tail(head,tail,name);
    }
    int q;
    cin >> q;
    string cmnd,address;
    Node* crnt = head;
    while(q--){
        cin >> cmnd;
        
        if(cmnd == "visit"){
            cin >> address;
            Node* tmp = head;
            bool found = false;
            while(tmp != NULL){
                if(tmp->name == address){
                    found = true;
                    crnt = tmp;
                    break;
                }
                tmp = tmp->next;
            }
            if(found)
            cout << crnt->name << endl;
            else
            cout << "Not Available" << endl;
        }else if(cmnd == "next"){
            if(crnt->next != NULL){
                crnt = crnt->next;
                cout << crnt->name << endl;
            }else{
                cout << "Not Available" << endl;
            }
        }else if(cmnd == "prev"){
              if(crnt->prev != NULL){
                crnt = crnt->prev;
                cout << crnt->name << endl;
              }else{
                cout << "Not Available"<< endl;
              }
        }
    }

    return 0;
}