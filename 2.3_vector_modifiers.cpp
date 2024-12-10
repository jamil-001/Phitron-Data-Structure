#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // vector <int> v = {1,2,3,4,5};
    // vector<int> v2;
    // v2 = v;
    // for(int i=0;i < v2.size();i++){
    //     cout << v2[i] <<" ";
    // }
    // for(int x : v2){
    //     cout << x <<" ";
    // }
    vector<int> v ={1,2,3,4,5,6};
    vector<int> v2 = {100,200,300};
    //v.insert(v.begin()+2,v2.begin(),v2.end());
    v.erase(v.begin()+1,v.begin()+5);//when we delete middle element

    for(int x : v){
        cout <<  x <<" ";    
     }
    return 0;
}
//v2 = v we assign one vector to another
// we use range base forloop
//v.push_back = add new value to last index
//v.pop_back = remove element to last index
//v.insert(pos,val) = when we need new element add in array
//then we use v.insert(v.begin()+2,100);
//v.erase(v.begin()+2);// we use this function when any position we deleted
////v.insert(v.begin()+2,v2.begin(),v2.end());