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
void print_forward(list<int>&l){
    cout << "L -> ";
    for(int val : l){
        cout << val <<" ";
    }
    cout << endl;
}
void print_backward(list<int>&l){
    cout <<"R -> ";
    for(auto it = l.rbegin();it != l.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;
}
int main(){
    int q;
    cin >> q;
    list <int> l;
    while(q--){
       long long int x,v;
        cin >> x >> v;
        if(x == 0){
            l.push_front(v);
        }else if(x == 1){
            l.push_back(v);

        }else if(x == 2){
            if( v >= 0 && v < l.size()){
                auto it = next(l.begin(),v);
                l.erase(it);
            }
        }
        print_forward(l);
        print_backward(l);
    }
    
    return 0;
}