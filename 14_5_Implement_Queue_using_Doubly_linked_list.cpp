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
class myqueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz =0;
    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(tail == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;

    }
    void pop()
    {
        sz--;
        Node* deletenode = head;
        head = head->next ;
        delete deletenode;
        if(head == NULL){
            tail = NULL;
            return ;
        }
        head->prev = NULL;

    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main(){
    myqueue q;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        q.push(x);
    }
    // while(!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    cout << q.front() <<" " << q.back() <<" " << q.size() << endl;
    return 0;
}