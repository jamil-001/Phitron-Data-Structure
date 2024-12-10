#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>> v[i];
    }
   
    replace_if(v.begin(),v.end(),[](int x){return x > 0;},1);
    replace_if(v.begin(),v.end(),[](int x){return x < 0;},2);
    for(int x : v){
        cout << x << " ";
    }

    return 0;
}