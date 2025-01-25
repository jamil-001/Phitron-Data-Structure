#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {10,30,20,70,50,60,20,10,50,70,40};
    //l.remove(10);
    l.sort();
    l.unique();
    l.reverse();
    for(auto val : l){
        cout << val << endl;
    }
    return 0;
}
/*
For remove value:
l.remove(10);

For sort linked list:
l.sort();

For decending order sort linkedlist:
l.sort(greater<int>());

For print unique value:
first sort list accending or decending:
l.sort();
l.unique();

For reverse printing:
l.reverse();
*/