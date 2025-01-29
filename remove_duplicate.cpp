#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    int val;
    while(cin >> val && val != -1){
        l.push_back(val);
    }
    l.sort();
    l.unique();
    for(int val : l){
        cout << val << " ";
    }
    return 0;
}