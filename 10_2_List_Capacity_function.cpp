#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30};
    list<int> l(v.begin(),v.end());
    //for clear list:
     //l.clear();

     //for resize list:
     //l.resize(5);
     
    for(int val : l){
        cout << val << endl;
    }

    //for is empty list:
    // if(l.empty()){
    //     cout << "Empty" << endl;
    // }else{
    //     cout << "Not Empty" << endl;
    // }

    //for list size:
    cout << l.size() << endl;
    return 0;
}