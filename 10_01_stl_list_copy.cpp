#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {1,2,3,4,5};
    // copy to list:
    list<int> l2(l);

    // int a[] = {10,20,30};
    //copy to array:
    // list<int> l2(a,a+3);

    // vector<int> v = {10,20,30};
    // copy to vector:
    // list<int> l2(v.begin(),v.end());
    for(int val : l2){
        cout << val << endl;
    }
    return 0;
}