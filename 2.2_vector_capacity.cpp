#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.resize(7);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    //cout << v.size() << endl;
    //v.clear();
    //cout << v.size() << endl;
    // cout<< v[0] <<endl;
    // cout<< v[1] <<endl;
    // cout<< v[2] <<endl;
    // cout << v.capacity() <<endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // if(v.empty()){
    //     cout << "Yes" <<endl;
    // }else{
    //     cout <<"not"<<endl;
    // }
    return 0;
}

//vector capacity increase her value when we push new value
//v.clear() = when we clear a vector then we use v.clear() function
//v.clear() = just remove size but not remove value
//v.empty() = when we check this vector is empty or not then we use this function
//v.resize(4,100) = when vector size increment or decrement then we use this function
// vector a joto ta value ase er porer sob gula 100 kore dibe
