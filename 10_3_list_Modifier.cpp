#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l ={10,20,30};
    list<int> l2 = {100,200};
    // l.push_back(40);
    // l.push_front(100);
    // l.pop_back();
    // l.pop_front();
    l.insert(next(l.begin(),2),l2.begin(),l2.end());
    for(int val : l){
        cout << val << endl;
    }
   //cout << *next(l.begin(),2) << endl;
    return 0;
}
/*
vector push back and list push back er maze ki partokko
like insert at tail:
l.push_back(40) 

like insert at head:
l.push_front(100);

like insert at any position:
l.insert(next(l.begin(),2),100);

like delete at head:
l.pop_front();

Like delete at tail:
l.pop_back();
*/