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
class myqueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }
    void pop()
    {
        sz--;
        Node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == NULL){
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
    int back()
    {
        return tail->val;
    }
};
int main(){
    myqueue qu;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        qu.push(x);
    }
    while(!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }
   

    return 0;
}