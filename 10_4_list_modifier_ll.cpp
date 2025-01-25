#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {10,20,30,40,50,60,70};
    //use this for erase value:
    // l.erase(next(l.begin(),2),next(l.begin(),7));

    //replace(l.begin(),l.end(),20,100);
    auto it = find(l.begin(),l.end(),200);
    if(it == l.end()){
        cout << "not found" << endl;
    }else{
        cout << "found" << endl;
    }
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}
/*
    list<int> l = {10,20,30,40,50,60,70};

    //use this for erase value:
    l.erase(next(l.begin(),2),next(l.begin(),7));
    
    Replace value:
    replace(l.begin(),l.end(),20,100);

    Find value:
    auto it = find(l.begin(),l.end(),200);

*/